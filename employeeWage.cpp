#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void employeeWageCalculator(int employeeType, int totalHoursWorked, int totalDaysWorked) {
    switch (employeeType) {
    case 1:
        cout << "Employee is full-time and his monthly wage is " << totalHoursWorked * 20 << endl;
        break;
    default:
        cout << "Employee is part-time and his monthly wage is " << totalHoursWorked * 10 << endl;
        break;
    }
}

int main() {
    cout << "Welcome to Employee-Wage-Computation" << endl;
    srand(time(0));
    int workingDays = 0;
    int absentCount = 0;
    int presentCount = 0;
    int totalHoursWorked = 0;

    while (workingDays < 20 && totalHoursWorked < 100) {
        int randombit = rand() % 2;
        workingDays++;
        switch (randombit) {
        case 0:
            cout << "Day " << workingDays << ": Employee is Absent" << endl;
            absentCount++;
            break;

        default:
            cout << "Day " << workingDays << ": Employee is Present" << endl;
            presentCount++;
            totalHoursWorked += (rand() % 2 == 0 ? 8 : 4); // Randomly decide if the day is full-time (8) or part-time (4) work
            break;
        }
        if (totalHoursWorked >= 100 || workingDays >= 20) {
            break;
        }
    }

    cout << "Employee is absent " << absentCount << ", Employee is present " << presentCount << endl;
    cout << "Total Hours Worked: " << totalHoursWorked << ", Total Working Days: " << workingDays << endl;

    if (workingDays > 0) {
        int employeeType = rand() % 2; // Randomly determine employee type
        employeeWageCalculator(employeeType, totalHoursWorked, workingDays);
    } else {
        cout << "No working days for this month." << endl;
    }

    return 0;
}
