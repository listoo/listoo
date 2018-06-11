#ifndef UNIT_H
#define UNIT_H
#include <map>
#include "item.h"
using namespace std;

class Unit: public Item
{
public:
    Unit();
private :
    int id;

};

#endif // UNIT_H
