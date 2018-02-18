#include "itemfile.h"

ItemFile::ItemFile()
{

}


void ItemFile::itemize(int i, fs::path p)
{
    this->setId(i);
    string name = p.filename().string();
    this->setName(name);

}
