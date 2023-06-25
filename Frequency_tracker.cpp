#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include "Frequency_tracker.h"


using namespace std;

void Frequency_tracker::add_item(string name){
    Item* item = this -> search(name);

    if(item == nullptr){
        item = new Item;
        item -> setName(name);
        item -> increment();
        items.push_back(*item);

    }
    else{
        item ->increment();
    }

};

Item* Frequency_tracker::search(string name){
    Item* item_pointer = nullptr;

    for(int i =0; i < items.size(); ++i){
        if(items[i].getName() == name){
            item_pointer = &items[i];
        }
    }
            
    return item_pointer;
};

void Frequency_tracker::print_option1(){
        Item* item;
        string input;
        cout << "Enter item name: ";
        cin >> input;

        item = this -> search(input);

        if (item == nullptr){
            cout << "Error: Item not found." << endl;
        }
        else{
            cout << "Searching..." << endl;
            cout << item ->getName() << " " << item->getFrequency() << endl;
        }

};
void Frequency_tracker::print_option2(){
    for(int i=0; i < items.size(); ++i){
        cout << items.at(i).getName() << " : " << items.at(i).getFrequency() << endl;
    }

};
void Frequency_tracker::print_option3(){
    for(int i=0; i < items.size(); ++i){
        cout << setw(12) << left <<  items.at(i).getName();
        for(int j =0; j < items.at(i).getFrequency(); ++j){
            cout << "*";
        }
        cout << endl;
    }

};
void Frequency_tracker::backup_data(){
    ofstream backup_file;

    cout << "Creating backup file..." << endl;
    backup_file.open("frequency.dat");

    if(!backup_file.is_open()){  // validate backup file opened succesfully
        throw runtime_error("Error: Backup file failed to open...");
    }
    for(int i=0; i < items.size(); ++i){
        backup_file << items.at(i).getName() << " " << items.at(i).getFrequency() << endl;
    }
    backup_file.close();


}
