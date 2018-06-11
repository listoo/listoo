#ifndef ITEMFILE_H
#define ITEMFILE_H
#include "item.h"
#include "boost/filesystem.hpp"
#include <boost/range/iterator_range.hpp>
#include <boost/multiprecision/gmp.hpp>
using namespace std;
namespace fs = boost::filesystem;
class ItemFile: public Item
{
public:
    ItemFile();
    void itemize(int,fs::path);
    void setPath(fs::path);
    fs::path getPath();
    void setFileSize(boost::uintmax_t);
    boost::uintmax_t getFileSize();
    void setExtension(string);
    string getExtension();
    void print_infos();
private:

    boost::uintmax_t filesize;
    fs::path parent_path;
    string extension;
};

#endif // ITEMFILE_H
