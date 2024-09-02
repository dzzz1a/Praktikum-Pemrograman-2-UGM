#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    string name;
    int salary, taxp;
    double tax, net_salary, installment, insurance;

    cout << "Enter employee name: ";
    getline(cin, name);
    cout << endl;

    cout << "Enter employee salary: ";
    cin >> salary;
    cout << endl;

    cout << "Enter Tax Percentage (in percent): ";
    cin >> taxp;
    cout << endl;

    cout << "Enter employee installment: ";
    cin >> installment;
    cout << endl;

    cout << "Enter employee insurance: ";
    cin >> insurance;
    cout << endl;

    tax = salary * (static_cast<double>(taxp) / 100);

    net_salary = salary - tax - installment - insurance;

    cout << "Payslip for Employee: " << name << endl;
    cout << "----------------------" << endl;
    cout << "Gross Salary: Rp" << salary << endl;
    cout << fixed << setprecision(2) << "Tax(" << taxp << "%): Rp"<< tax << endl;
    cout << "Installment: Rp" << installment << endl;
    cout << "Insurance: Rp" << insurance << endl;
    cout << fixed << setprecision(2) << "Net Salary: Rp" << net_salary << endl;

    return 0;
}
