#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "buwung";
    char m;
    cout << "Do you want a hardcoded input and output? (y/n): ";
    cin >> m;
    if (m == 'n') {
        cout << "Enter a string: ";
        cin >> s;
    }
    int n = s.size();
    string r(n, '\0');
    for (int i = 0; i < n; i++) {
        r[i] = s[n - i - 1];
    }

    for(int i = 0; i < n; i++) {
        if (s[i] != r[i]) {
            cout << "the initial string is "<< s <<" and it is not a palindrome" << endl;
            m = 'f';
            return 0;
        }
    }

    if (m != 'f') {
        cout << "the initial string is "<< s <<" and it is a palindrome" << endl;
    }

    return 0;
}
