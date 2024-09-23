#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> List(100);
    int i;
    
    for (i = 0; i < 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            List[i] = "FizzBuzz";
        } 
        else if ((i + 1) % 3 == 0) {
            List[i] = "Fizz";
        } 
        else if ((i + 1) % 5 == 0) {
            List[i] = "Buzz";
        } 
        else {
            List[i] = to_string(i + 1);
        }
    }
    
    for (i = 0; i < 100; i++) {
        cout << List[i];
        if (i < 99) {
            cout << ", ";
        }
    }
    
    cout << endl;
    return 0;
}
