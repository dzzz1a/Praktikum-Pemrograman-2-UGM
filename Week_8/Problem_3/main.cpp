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
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };
    int i = 0, j = 7, query = 59;

    while (i < j){
        if (arr[i].score == query){
            found = true;
            cout << "Student found: " << arr[i].name << ", ID :" << arr[i].id << endl;
        }    
        i++;
    }

    if (!found) {
        cout <<"not found." << endl;
    }

    return 0;
}
