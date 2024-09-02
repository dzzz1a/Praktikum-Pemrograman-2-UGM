#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float D, a, b, c, x1, x2, x;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    
    D = b*b - 4 * a * c;

    if (D > 0) {
        x1 = (-b - sqrt(D)) / (2 * a);
        x2 = (-b + sqrt(D)) / (2 * a);
        cout << "x1 = " << x1 << " and x2 = " << x2 << endl;
    } 
    else if (D == 0) {
        x = -b / (2 * a);
        cout << "x = " << x << endl;
    } 
    else {
        cout << "The roots are imaginary." << endl;
    }

    return 0;
}
