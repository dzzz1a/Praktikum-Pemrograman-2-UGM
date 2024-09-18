#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

// Function to compute the roots and return them as a string
string solveQuadratic(float a, float b, float c) {
    float D = b*b - 4*a*c;
    string result;

    if (a == 0) {
        result = "value of a can't be zero!";
    } else if (D > 0) {
        float x1 = (-b - sqrt(D)) / (2 * a);
        float x2 = (-b + sqrt(D)) / (2 * a);
        result = "x1 = " + to_string(x1) + " and x2 = " + to_string(x2);
    } else if (D == 0) {
        float x = -b / (2 * a);
        result = "x = " + to_string(x);
    } else {
        result = "The roots are imaginary (complex).";
    }

    return result;
}

int main(int argc, char* argv[]) {
    // If a filename is provided, use it; otherwise, ask for user input.
    if (argc == 2) {
        // Process input from file
        ifstream testFile(argv[1]);
        if (!testFile) {
            cerr << "Error: Could not open " << argv[1] << endl;
            return 1;
        }

        float a, b, c;
        string expected_output;
        int test_num = 1;
        bool all_tests_passed = true;

        while (testFile >> a >> b >> c && getline(testFile >> ws, expected_output)) {
            string output = solveQuadratic(a, b, c);

            if (output == expected_output) {
                cout << "Test " << test_num << " passed!" << endl;
            } else {
                cout << "Test " << test_num << " failed. Expected: \"" 
                     << expected_output << "\", Got: \"" << output << "\"" << endl;
                all_tests_passed = false;
            }
            test_num++;
        }

        if (all_tests_passed) {
            cout << "All tests passed!" << endl;
        } else {
            cout << "Some tests failed." << endl;
        }

        testFile.close();
    } else {
        // Process user input interactively
        float a, b, c;
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
        cout << "Enter the value of c: ";
        cin >> c;

        string result = solveQuadratic(a, b, c);
        cout << result << endl;
    }

    return 0;
}
