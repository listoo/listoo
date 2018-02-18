#include "workspace.h"


Workspace::Workspace()
{
    cout<<"--- Workspace Constructor ---"<<endl;
    this->nItemFile=numberOfItemFile;
    this->nItemFolder=numberOfItemFolder;
    this->rootPath=DEFAUL_ROOT_PATH;
    this->nItemMax=numberOfItemFile*numberOfItemFolder;
    this->initializeItem();
    this->printInfos();
}
void Workspace::initializeItem(){
    //first initialise
    int counter=0;
    for(int k = 0;k<(this->nItemFile) ;k++){
        this->iFile[k].setId(counter);
        this->freeItemFileTab.push_back(k);
        counter++;
    }
    //second initialise
    for(int k = 0;k<(this->nItemFolder);k++){
        this->iFolder[k].setId(counter);
        this->freeItemFolderTab.push_back(k);
        counter++;
    }
    //Initialisation tables
    for(int k = 0;k<this->nItemMax;k++){
        this->freeItemTab.push_back(k);
    }
}

//cout<<iFile[k].setId(counter);


void Workspace::printInfos(){
    // show All Id
    cout<<"Id of ItemFiles :"<<endl;
    for(int k = 0; k<(this->nItemFile);k++){
        cout<< "-> "<<this->iFile[k].getId()<<endl;
    }
    cout<<"Id of ItemFolder :"<<endl;
    for(int k = 0; k<(this->nItemFolder);k++){
        cout<< "-> "<<this->iFolder[k].getId()<<endl;
    }
}
int Workspace::getNum(){
    return this->num;
}


void Workspace::get_file_list()
{
    std::vector<std::string> FileNames;
    fs::path directory(this->rootPath);
    fs::directory_iterator iter(directory), end;
    int counter=0;
    for(;iter != end; ++iter){
        counter++;
        //if (iter->path().extension() == ".txt")
        FileNames.push_back(iter->path().filename().string());
        cout<<">"<<iter->path().filename().string()<<"--"<<endl;
        if (is_directory(iter->path())){
            cout<<" --> directory"<<endl;
        }

    }
    ///List Files
   int FileNames_len = counter;
    cout<<" la taille du tableau : "<<FileNames_len<<endl;
    for(int k =0;k<FileNames_len;k++){
          cout<<"-->"<<FileNames[k]<<endl;
    }
}

void Workspace::set_file_list()
{
    std::vector<std::string> FileNames;
    fs::path directory(this->rootPath);
    fs::directory_iterator iter(directory), end;
    int counter=0;
    for(;iter != end; ++iter){
        counter++;
        FileNames.push_back(iter->path().filename().string());
        cout<<">"<<iter->path().filename().string()<<"--"<<endl;
        int g_Id = this->freeItemTab.front();
        freeItemTab.erase(freeItemTab.begin());
        if (is_directory(iter->path())){
            cout<<" --> directory"<<endl;
            this->setFolder(g_Id);
        }else{
            cout<<" --> file"<<endl;
            this->setFile(g_Id,iter->path());
        }

    }
    ///List Files
   int FileNames_len = counter;
    cout<<" la taille du tableau : "<<FileNames_len<<endl;
    for(int k =0;k<FileNames_len;k++){
          cout<<"-->"<<FileNames[k]<<endl;
    }
}


void Workspace::setFile(int i,fs::path p){
    // first free item form iFile, we look in the table
    int id = freeItemFileTab.front();
    this->freeItemFileTab.erase(freeItemFileTab.begin());
    this->itemFileTab.push_back(id);
    this->iFile[i].itemize(i,p);
    this->iFile[i].setGlobalId(i);
}

void Workspace::setFolder(int i){
    // first free item form iFolder, we look in the table
    int id = freeItemFolderTab.front();
    this->freeItemFolderTab.erase(freeItemFolderTab.begin());
    this->itemFolderTab.push_back(id);
    this->iFolder[i].setGlobalId(i);
}
