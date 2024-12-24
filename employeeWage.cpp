#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Employee {
private:
    int workingDays;
    int absentCount;
    int presentCount;
    int totalHoursWorked;

public:
  
    Employee() : workingDays(0), absentCount(0), presentCount(0), totalHoursWorked(0) {}

   
    void employeeWageCalculator(int employeeType) {
        if (employeeType == 1) {
            cout << "Employee is full-time and his monthly wage is " << totalHoursWorked * 20 << endl;
        } else {
            cout << "Employee is part-time and his monthly wage is " << totalHoursWorked * 10 << endl;
        }
    }

    void calculateAttendanceAndHours() {
        srand(time(0));

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
    }

    // Method to randomly set employee type (full-time or part-time)
    int setEmployeeType() {
        return rand() % 2; // Randomly determine employee type
    }


    void displayNoWorkingDaysMessage() {
        cout << "No working days for this month." << endl;
    }


    int getWorkingDays() {
        return workingDays;
    }
};

int main() {
    cout << "Welcome to Employee-Wage-Computation" << endl;

   
    Employee emp;

    
    emp.calculateAttendanceAndHours();

    if (emp.getWorkingDays() > 0) {
        // Set employee type (full-time or part-time)
        int employeeType = emp.setEmployeeType();
        // Calculate and display the wage based on the employee type
        emp.employeeWageCalculator(employeeType);
    } else {
        // Display message if no working days
        emp.displayNoWorkingDaysMessage();
    }

    return 0;
}
