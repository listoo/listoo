#ifndef WORKSPACE_H
#define WORKSPACE_H
#include "itemfile.h"
#include "itemfolder.h"
#include "directives.h"
#include "iostream"
#include <string>
#include "boost/filesystem.hpp"

#include <boost/range/iterator_range.hpp>

using namespace std;
namespace fs = boost::filesystem;


class Workspace
{

public:
    Workspace();

    void initializeItem();
    int getNum();
    void printInfos();

    void get_file_list();
    void set_file_list();

    void setFile(int, fs::path);
    void setFolder(int);

public:
    int num = 11;
private :
   ItemFile iFile[numberOfItemFile];
   ItemFolder iFolder[numberOfItemFolder];
   int nItemMax;
   int nItemFile;
   int nItemFolder;
   //map <int,int> itemTab;
   vector <int> itemTab;
   vector <int> freeItemTab;
   vector <int> itemFileTab;
   vector <int> itemFolderTab;
   vector <int> freeItemFileTab;
   vector <int> freeItemFolderTab;


   string rootPath;
};

#endif // WORKSPACE_H
