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
private:

    boost::multiprecision::mpz_int myint;
};

#endif // ITEMFILE_H
