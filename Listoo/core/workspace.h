#ifndef WORKSPACE_H
#define WORKSPACE_H
#include "itemfile.h"
#include "itemfolder.h"
#include "unit.h"
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
    void organize();
    void explore();

    void setFile(int, fs::path);
    void setFolder(int);

public:
    int num = 11;
private :
   ItemFile iFile[numberOfItemFile];
   ItemFolder iFolder[numberOfItemFolder];
   Unit iUnit[numberOfUnit];
   int nItemMax;
   int nItemFile;
   int nItemFolder;
   int nUnit;
   //map <int,int> itemTab;
   vector <int> itemTab;
   vector <int> freeItemTab;
   vector <int> itemFileTab;
   vector <int> itemFolderTab;
   vector <int> freeItemFileTab;
   vector <int> freeItemFolderTab;
   vector <int> freeUnitTab;
   vector <int> unitTab;


   string rootPath;
};

#endif // WORKSPACE_H
