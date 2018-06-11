#include "itemfile.h"

ItemFile::ItemFile()
{

}

void ItemFile::setPath(fs::path p){
    this->parent_path=p;
}

fs::path ItemFile::getPath(){
    return this->parent_path;
}

void ItemFile::setExtension(string str){
    this->extension=str;
}

string ItemFile::getExtension(){
    return this->extension;
}

void ItemFile::setFileSize(boost::uintmax_t i){
    this->filesize=i;
}

boost::uintmax_t ItemFile::getFileSize(){
    return this->filesize;
}

void ItemFile::itemize(int i, fs::path p)
{
    string name = p.filename().string();
    string extension = fs::extension(p);
    fs::path parent_path = p.parent_path();
    boost::system::error_code ec;
    boost::uintmax_t fsize = file_size(p, ec);
    this->setId(i);
    this->setName(name);
    this->setType("file");
    this->setExtension(extension);
    this->setPath(parent_path);
    this->setFileSize(fsize);

}


void ItemFile::print_infos()
{
    cout<<" Item "<<this->getId()<<"   Name : "<<this->getName()<<" Size : "<<this->getFileSize()<<" path : "<<this->getPath()<<endl;

}


