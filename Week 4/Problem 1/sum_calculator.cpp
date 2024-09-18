#include <iostream>
#include <fstream>
using namespace std;

// Function to calculate the sum from 1 to n
int calculateSum(int n) {
    int m = 0;
    for (int i = 1; i <= n; ++i) {
        m += i;
    }
    return m;
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        // If a file is passed as an argument, read from the file (test mode)
        ifstream testFile(argv[1]);
        if (!testFile) {
            cerr << "Error: Could not open " << argv[1] << endl;
            return 1;
        }

        int n, expected_sum;
        int test_num = 1;
        
        while (testFile >> n >> expected_sum) {
            int sum = calculateSum(n);
            cout << "Test " << test_num << ": ";
            if (sum == expected_sum) {
                cout << "passed!" << endl;
            } else {
                cout << "failed. Expected: " << expected_sum << ", Got: " << sum << endl;
            }
            test_num++;
        }

        testFile.close();
    } else {
        // Otherwise, handle user input
        int n;
        cout << "Enter the value of n: ";
        cin >> n;

        int sum = calculateSum(n);
        cout << "The sum from 1 to " << n << " is " << sum << endl;
    }

    return 0;
}
