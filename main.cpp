
#include "methods.cpp"

using namespace std;

int main(){
    try{
        int response;
        bool continue_program = true;

        Frequency_tracker tracker = analyze();
        tracker.backup_data();

        while(continue_program){
            response = get_input();

            switch(response){
            case 1:
                tracker.print_option1();
                break;
            case 2:
                tracker.print_option2();
                break;
            case 3:
                tracker.print_option3();
                break;
            default:
                continue_program = false;
                break;
            
            }
        }
        return 0;
    }

    catch(runtime_error& e){
        cout << e.what() << endl;
        return -1;
    }



}
