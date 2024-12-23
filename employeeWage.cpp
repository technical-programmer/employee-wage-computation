#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){

    cout << "Welcome to Employee-Wage-Computation" << endl;
    
     srand(time(0));

        int randombit = rand() % 2; 
        
    if(randombit == 0){
        cout << "Employee is Absent" << endl;;
    }else{
         cout << "Employee is Present";
        }

return 0;
}


