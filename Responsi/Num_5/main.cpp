#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "buwung";
    char m;
    cout << "Do you want a hardcoded input? (y/n): ";
    cin >> m;
    if (m == 'n') { // if the user chose to input, the initial value of s will be overwrited
        cout << "Enter a string: ";
        cin >> s;
    }
    int n = s.size(); // using the function to find the size of an array
    string r(n, ' '); // assigning the size of the string
    for (int i = 0; i < n; i++) {
        r[i] = s[n - i - 1];
    }

    for(int i = 0; i < n; i++) {
        if (s[i] != r[i]) {
            cout << "the initial string is "<< s <<" and it is NOT a palindrome" << endl;
            m = 'f';
            return 0;
        }
    }

    if (m != 'f') {
        cout << "the initial string is "<< s <<" and it IS a palindrome" << endl;
    }

    return 0;
}
