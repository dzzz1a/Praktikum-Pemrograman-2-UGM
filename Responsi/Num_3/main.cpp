#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int s[n] = {1, 2, 3, 4, 5}, e = 0, o = 0;
    char m;
    cout << "Do you want a hardcoded input? (y/n): ";
    cin >> m;
    if (m == 'n') {
        int n;
        cout << "Enter the size of array: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << "Enter the " << i + 1 << "th element: ";
            cin >> s[i];
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (s[i] % 2 == 0) {
            e++;
        } else {
            o++;
        }
    }

    cout << "The sum of odd numbers is: " << o << endl;
    cout << "The sum of even numbers is: " << e << endl;
    return 0;
}
