#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}
int subs(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int divi(int a, int b) {
    return a / b;
}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Addition: " << add(a, b) << endl;
    cout << "Substraction: " << subs(a, b) << endl;
    cout << "Multiplication: " << mul(a, b) << endl;
    cout << "Division: " << divi(a, b) << endl;
    return 0;
}
