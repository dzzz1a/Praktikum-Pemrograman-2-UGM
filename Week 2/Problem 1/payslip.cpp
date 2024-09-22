#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>

using namespace std;

struct Payslip {
    string employeeName;
    double grossSalary;
    double taxPercent;
    double installment;
    double insurance;

    double calculateTax() const {
        return grossSalary * (taxPercent / 100);
    }

    double calculateNetSalary() const {
        return grossSalary - calculateTax() - installment - insurance;
    }
};

// Function to collect generated payslip as a vector of strings
vector<string> generatePayslip(const Payslip& payslip, bool printNetSalary = true) {
    vector<string> output;

    ostringstream oss;
    oss << "Payslip for Employee: " << payslip.employeeName;
    output.push_back(oss.str());
    output.push_back("----------------------");

    oss.str(""); // clear the stream
    oss << fixed << setprecision(2);
    oss << "Gross Salary: Rp" << payslip.grossSalary;
    output.push_back(oss.str());

    oss.str("");
    // Check if the tax percent is a whole number (no decimal part)
    if (payslip.taxPercent == static_cast<int>(payslip.taxPercent)) {
        oss << "Tax(" << static_cast<int>(payslip.taxPercent) << "%): Rp" << payslip.calculateTax();
    } else {
        oss << "Tax(" << payslip.taxPercent << "%): Rp" << payslip.calculateTax();
    }
    output.push_back(oss.str());

    oss.str("");
    oss << "Installment: Rp" << payslip.installment;
    output.push_back(oss.str());

    oss.str("");
    oss << "Insurance: Rp" << payslip.insurance;
    output.push_back(oss.str());

    if (printNetSalary) {
        oss.str("");
        oss << "Net Salary: Rp" << payslip.calculateNetSalary();
        output.push_back(oss.str());
    }

    return output;
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        // Test mode: read from file
        ifstream testFile(argv[1]);
        if (!testFile) {
            cerr << "Error: Could not open file " << argv[1] << endl;
            return 1;
        }

        string line;
        int testNumber = 1;

        while (getline(testFile, line)) {
            istringstream iss(line);
            Payslip payslip;

            // Extract employee name and fields
            getline(iss, payslip.employeeName, ',');
            iss >> payslip.grossSalary >> payslip.taxPercent >> payslip.installment >> payslip.insurance;

            // Generate the payslip output
            vector<string> actualOutput = generatePayslip(payslip);

            // Read the expected output from the file
            vector<string> expectedOutput;
            while (getline(testFile, line) && !line.empty()) {
                expectedOutput.push_back(line);
            }

            // Compare actual and expected output line by line
            bool passed = true;
            for (size_t i = 0; i < expectedOutput.size(); ++i) {
                if (i >= actualOutput.size() || expectedOutput[i] != actualOutput[i]) {
                    cout << "Test " << testNumber << ": Failed!" << endl;
                    cout << "Expected: " << expectedOutput[i] << endl;
                    cout << "Got: " << actualOutput[i] << endl;
                    passed = false;
                    break;
                }
            }

            if (passed) {
                cout << "Test " << testNumber << ": Passed!" << endl;
            }

            testNumber++;
        }

        testFile.close();
    } else {
        // User input mode
        Payslip payslip;

        cout << "Enter employee name: ";
        getline(cin, payslip.employeeName);

        cout << "Enter gross salary: ";
        cin >> payslip.grossSalary;

        cout << "Enter tax percentage: ";
        cin >> payslip.taxPercent;

        cout << "Enter installment: ";
        cin >> payslip.installment;

        cout << "Enter insurance: ";
        cin >> payslip.insurance;

        vector<string> payslipOutput = generatePayslip(payslip);
        for (const string& line : payslipOutput) {
            cout << line << endl;
        }
    }

    return 0;
}
