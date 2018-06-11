#ifndef ITEM_H
#define ITEM_H
#include<iostream>
#include <vector>
#include <map>


using namespace std;
class Item
{
public:
    Item();
    void setId(int);
    int getId();
    void setGlobalId(int);
    int getGlobalId();
    void setLevel(int);
    int getLevel();
    void setType(string);
    string getType();
    void setName(string);
    string getName();

    void release();
    void hold();
    bool isFree();
private :
   int id;
   int globalId;
   bool free;
   string type;
   string name;
   string path;
   int level;

};

#endif // ITEM_H
