#include <iostream>
#include <vector>

using namespace std;

vector<int> inverse(const vector<int>& List) {
    int n = List.size();
    vector<int> CList(n);

    for (int i = 0; i < n; ++i) {
        CList[i] = List[n - 1 - i];
    }

    return CList;
}

int main() {
    char o;
    cout << "User input? (Y/N): ";
    cin >> o;

    if(o == 'N'){
        vector<int> List = {1, 2, 3};
        vector<int> invertedList = inverse(List);

        for (int num : invertedList) {
            cout << num << " ";
        }
        cout << endl;
    }
    else{
        int n;
    
        cout << "Enter the value of n: ";
        cin >> n;
        vector<int> List(n);
        for(int i = 0; i < n; i++){
            cout << "Enter the " << i << " index: ";
            cin >> List[i];
        }
        vector<int> CList = inverse(List);

        for(int num : CList){
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
