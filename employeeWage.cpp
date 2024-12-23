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
    switch (employeeType)
    {
    case 1:
        cout << "Employee is full-time and his wage is " << 8*20 <<endl;
        break;
    
    default:
        cout << "Employee is part-time ans his wage is " << 4*20 << endl;
        break;
    }
}

int main(){

    cout << "Welcome to Employee-Wage-Computation" << endl;
    
     srand(time(0));

        int randombit = rand() % 2; 
        
    switch (randombit)
    {
    case 0:
        cout << "Employee is Absent" << endl;
        break;
    
    default:
        cout << "Employee is present" << endl;
        int employeeType = rand() % 2;
        employeeWageCalculator(employeeType);
        break;
    }
    }


