#include <iostream>
#include <string>
#include <cmath>
#include "bank.h"


Bank::Bank(){ // constructor
    initial_investement = -1.0;
    monthly_contribution = -1.0;
    annual_interest = -1;
    num_years = -1;
};

void Bank::calc_without_monthly(int& curr_year, int& curr_ammount){
    if(curr_year > num_years){
        return;
    }
    else{
        double total_interest_accrued = curr_ammount - initial_investement;
        double interest = 1 + (annual_interest/100.0)

        cout << "Year: " << curr_year << "   Total Balance: " << curr_ammount * interest << "   Total Gain: " << total_interest_accrued << endl;
        curr_ammount = curr_ammount * interest;
        curr_year += 1;
        this -> calc_interest_without_month(curr_year, curr_ammount)
    }



};

void Bank::calc_with_monthly(int& curr_year, int& curr_month, int& curr_ammount){
   if (curr_month > num_years * 12){
       return;
   }
   else{
       double interest = 1 + (annual_interest / 100.0) / 12;
       
       if (curr_year != 0 && curr_month % 12 = 0){
           double curr_interest_accrued = curr_ammount - ((curr_month * monthly_contribution) + initial_contribution);
           cout << "Year: " << year << "  Total: " << curr_ammount << "   Total Interest Gained: " << curr_interest_accrued<<endl;
           year += 1;
       }
       curr_month += 1;
       curr_ammount = (curr_ammount + monthly_contribution) * interest;
       this -> calc_total_without_monthly(curr_year,curr_month, curr_amount);
   }
   
};

double Bank::display_with_monthly(){
    int curr_month = 1;
    int curr_year = 0;
    double curr_amount = initial_investement;


    cout << "Generating Report..." << endl;
    cout << "==========" << endl;
    this -> calc_with_monthly(curr_month,curr_year,curr_amount);
    cout << "==========" << endl;
    cout << "Report Complete..." << endl;
    



};

double Bank::display_without_monthly(){
    int curr_year = 0;
    double curr_amount = initial_investement;


    cout << "Generating Report..." << endl;
    cout << "==========" << endl;
    this -> calc_without_monthly();
    cout << "==========" << endl;
    cout << "Report Complete..." << endl;
    

};

double set_initial(double amount){
    this -> initial_investement = amount;
};

double Bank::set_monthly(double monthly){
    this -> monthly_contribution = monthly;
};

int Bank::set_annual_interest(int interest){
    this -> annual_interest = interest;
};

int Bank::set_num_years(int years){
    this -> num_years = years;
};
