#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    int i, n, m;

    // Check if the input file is provided
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <input file>" << endl;
        return 1;
    }

    // Open the input file
    ifstream infile(argv[1]);
    if (!infile) {
        cerr << "Error: Could not open " << argv[1] << endl;
        return 1;
    }

    // Read the value of n from the file
    infile >> n;

    // Generate and print the multiplication table for n
    for (i = 1; i <= 10; i++) {
        m = n * i;
        cout << n << " x " << i << " = " << m << endl;
    }

    return 0;
}
