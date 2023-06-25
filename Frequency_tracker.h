#ifndef Frequency_tracker_H
#define Frequency_tracker_H
#include <iostream>
#include <vector>
#include "item.h"

using namespace std;

class Frequency_tracker{
    public:
        void add_item(string name);
        void print_option1();
        void print_option2();
        void print_option3();
        void backup_data();

    private:
        Item* search(string name);
        vector<Item> items;
        

};
#endif