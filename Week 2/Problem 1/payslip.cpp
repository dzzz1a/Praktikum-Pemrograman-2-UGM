#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

// Function to calculate and print the payslip
void printPayslip(const string& name, int salary, int taxp, double installment, double insurance) {
    double tax = salary * (static_cast<double>(taxp) / 100);
    double net_salary = salary - tax - installment - insurance;

    cout << "Payslip for Employee: " << name << endl;
    cout << "----------------------" << endl;
    cout << "Gross Salary: Rp" << salary << endl;
    cout << fixed << setprecision(2) << "Tax(" << taxp << "%): Rp" << tax << endl;
    cout << "Installment: Rp" << installment << endl;
    cout << "Insurance: Rp" << insurance << endl;
    cout << "Net Salary: Rp" << net_salary << endl;
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        // If a file is passed as an argument, read from the file (test mode)
        ifstream testFile(argv[1]);
        if (!testFile) {
            cerr << "Error: Could not open " << argv[1] << endl;
            return 1;
        }

        string name;
        int salary, taxp;
        double installment, insurance;

        int test_num = 1;
        while (getline(testFile, name) && testFile >> salary >> taxp >> installment >> insurance) {
            testFile.ignore(); // Ignore the newline after the insurance input
            cout << "Test " << test_num << ":" << endl;
            printPayslip(name, salary, taxp, installment, insurance);
            cout << endl;
            test_num++;
        }

        testFile.close();
    } else {
        // Otherwise, handle user input
        string name;
        int salary, taxp;
        double installment, insurance;

        cout << "Enter employee name: ";
        getline(cin, name);
        cout << "Enter employee salary: ";
        cin >> salary;
        cout << "Enter Tax Percentage (in percent): ";
        cin >> taxp;
        cout << "Enter employee installment: ";
        cin >> installment;
        cout << "Enter employee insurance: ";
        cin >> insurance;

        // Print the payslip
        printPayslip(name, salary, taxp, installment, insurance);
    }

    return 0;
}
