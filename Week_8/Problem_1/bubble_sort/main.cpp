#include <iostream>
#include <string>
using namespace std;

struct Student {
    long int id;
    string name;
    int score;
};

void BubbleSort(Student arr[], int n, int c) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((c == 1 && arr[j].id < arr[j + 1].id) || 
                (c == 3 && arr[j].score < arr[j + 1].score)) {
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
        {9965653989, "Arief Budiman", 60}
    };
    int n = 7;

    BubbleSort(arr, n, 1);
    cout << "\nArray sorted by ID:\n";
    PrintArray(arr, n);

    BubbleSort(arr, n, 3);
    cout << "\nArray sorted by Score:\n";
    PrintArray(arr, n);

    return 0;
}
