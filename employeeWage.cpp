#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void employeeWageCalculator(int employeeType,int absentCount,int presentCount) {
    switch (employeeType) {
    case 1:
        cout << "Employee is full-time and his monthly wage is " << 8 * 20*presentCount << endl;
        break;
    default:
        cout << "Employee is part-time and his monthly wage is " << 4 * 20*presentCount << endl;
        break;
    }
}

int main() {
    cout << "Welcome to Employee-Wage-Computation" << endl;

    srand(time(0));
    int   workingDays = 20;
     int absentCount=0;
     int presentCount=0;
    for (int i = 0; i < 20; i++) {
        int randombit = rand() % 2; 
        switch (randombit)
        {
        case 0:
             cout << "Day " << i + 1 << ": Employee is Absent" << endl;
            absentCount++;
            break;
        
        default:
             cout << "Day " << i + 1 << ": Employee is Present" << endl;
            presentCount++;
            break;
        }
    }
    cout<< absentCount<<" " <<presentCount <<endl;

    if (workingDays > 0) {
        int employeeType = rand() % 2; // Randomly determine employee type
        employeeWageCalculator(employeeType,absentCount,presentCount);
    } else {
        cout << "No working days for this month." << endl;
    }

    return 0;
}

