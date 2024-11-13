#include <iostream>
#include <string>
using namespace std;

struct Student {
    long int id;
    string name;
    int score;
};

int main(){
    bool found = false;
    Student arr[7] = {
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9952382180, "Ari Lutfianto", 65},
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9965653989, "Arief Budiman", 60},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70}
    };
    int i = 0, j = sizeof(arr)/sizeof(arr[0]) - 1, k;
    long int query = 9950310962;

    while (!found && i <= j){
        k = (i + j) / 2;
        if (arr[k].id == query){
            found = true;
            cout << "Student found: " << arr[k].name << endl;
        } else if (arr[k].id < query){
            i = k + 1;
        } else {
            j = k - 1;
        }
    }

    if (!found) {
        cout << "not found." << endl;
    }

    return 0;
}
