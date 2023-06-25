#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>

using namespace std;

class Item{
    public:
        Item(){
            name = "None";
            frequency = 0;
        }
        void setName(string newName){
            this -> name = newName;
        }
        string getName(){
            return this -> name;
        }
        void increment(){
            this -> frequency += 1;
        }
        int getFrequency(){
            return this-> frequency;
        }
    
    private:
        string name;
        int frequency;
};
#endif 