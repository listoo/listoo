#include "item.h"

Item::Item()
{
this->setId(-1);
}

void Item::setId(int i){
    this->id=i;
}

int Item::getId(){
    return this->id;
}

void Item::setGlobalId(int i){
    this->globalId=i;
}

int Item::getLevel(){
    return this->level;
}

void Item::setLevel(int i){
    this->level=i;
}

int Item::getGlobalId(){
    return this->globalId;
}
void Item::setType(string str){
    this->type=str;
}

string Item::getType(){
    return this->type;
}

void Item::setName(string str){
    this->name=str;
}

string Item::getName(){
    return this->name;
}



void Item::release(){
    this->free=true;
}

void Item::hold(){
    this->free=false;
}

bool Item::isFree(){
    return this->free;
}
