#indef BANK_H
#define BANK_H

using namespace std;
class Bank{
    private:
        Bank();
        double initial_investement;
        double monthly_contribution;
        int annual_interest;
        int num_years;
        double calc_interest_without_monthly(int& year);
        double calc_total_without_monthly(int& year);
        double calc_interest_with_monthly(int& year);
        double calc_total_with_monthly(int& year);
    public:
        double set_initial(double amount);
        double set_monthly(double monthly);
        int set_annual_interest(int interest);
        int set_num_years(int years);
        void display_with_monthly();
        void display_without_monthly();
        void prompt_response();
}



#endif