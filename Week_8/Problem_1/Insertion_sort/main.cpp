#include <iostream>
#include <string>
using namespace std;

struct Student {
    lomg int id;
    string name;
    int score;
};

void InsertionSort(Student arr[], int n, int c) {
    for (int i = 1; i < n; i++) {
        Student key = arr[i];
        int j = i - 1;

        while (j >= 0 && ((c == 1 && arr[j].id < key.id) || (c == 3 && arr[j].score < key.score))) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void PrintArray(Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i].id << " " << arr[i].name << " " << arr[i].score << endl;
    }
}

int main() {
    Student arr[7] = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Unknown", 60}
    };
    int n = 7;

    InsertionSort(arr, n, 1);
    cout << "\nArray sorted by ID:\n";
    PrintArray(arr, n);

    InsertionSort(arr, n, 3);
    cout << "\nArray sorted by Score:\n";
    PrintArray(arr, n);

    return 0;
}
