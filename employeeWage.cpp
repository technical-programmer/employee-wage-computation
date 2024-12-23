#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

// void employee_status(int employeeType){
//  int randomValue = rand() % 2; // Generates 0 or 1
//  if(randomValue==0){
//     cout << "Employee is Part-Time" << endl;
//  }else{
//     cout << "Employee is Full Time" <<endl;
//  }
// }

void employeeWageCalculator(int employeeType){
    if(employeeType==1){
        cout << "employee is full-time  and his wage is " << 8*20 << endl;
    }else {
        cout << "Employee is Part-time ans his wage is " << 4*20 << endl;
    }
}

int main(){

    cout << "Welcome to Employee-Wage-Computation" << endl;
    
     srand(time(0));

        int randombit = rand() % 2; 
        
    if(randombit == 0){
        cout << "Employee is Absent" << endl;
    }else{
         cout << "Employee is Present" << endl;

         int employeeType = rand() % 2;
         employeeWageCalculator(employeeType);
    }

    





return 0;
}


