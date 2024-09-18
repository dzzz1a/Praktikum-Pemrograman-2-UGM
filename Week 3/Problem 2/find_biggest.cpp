#include <iostream>
#include <fstream>
using namespace std;

// Function to find the largest number
int findBiggest(int a, int b, int c) {
    int big = a;
    if (b >= a) {
        big = b;
    }
    if (c >= big) {
        big = c;
    }
    return big;
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        // If a file is passed as an argument, read from the file (test mode)
        ifstream testFile(argv[1]);
        if (!testFile) {
            cerr << "Error: Could not open " << argv[1] << endl;
            return 1;
        }

        int a, b, c;
        int expected_big;
        int test_num = 1;
        
        while (testFile >> a >> b >> c >> expected_big) {
            int big = findBiggest(a, b, c);
            cout << "Test " << test_num << ": ";
            if (big == expected_big) {
                cout << "passed!" << endl;
            } else {
                cout << "failed. Expected: " << expected_big << ", Got: " << big << endl;
            }
            test_num++;
        }

        testFile.close();
    } else {
        // Otherwise, handle user input
        int a, b, c;

        cout << "enter the value of a: ";
        cin >> a;
        cout << "enter the value of b: ";
        cin >> b;
        cout << "enter the value of c: ";
        cin >> c;

        int big = findBiggest(a, b, c);

        cout << endl << "the biggest value is " << big << endl;
    }

    return 0;
}
