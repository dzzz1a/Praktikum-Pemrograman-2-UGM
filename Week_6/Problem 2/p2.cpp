#include <string>
#include <iostream>

using namespace std;

struct fullname {
    string firstname;
    string lastname;};

struct StudentRec {
    fullname name;
    string idNum;
    float UTS;
    float UAS;
}; 

StudentRec theStudent[10]; 

int main() {  
    int n;
    float m;
    cout<< "Input the number of students: ";
    cin>>n;

    for (int i=0;i<n;i++) {
        cout<<"Nama depan : ";
        cin>>theStudent[i].name.firstname;
        cout<<"Nama belakang : ";
        cin>>theStudent[i].name.lastname;
        cout<<"Nim : ";
        cin>>theStudent[i].idNum;
        cout<<"UTS Grade : ";
        cin>>theStudent[i].UTS;
        cout<<"UAS Grade: ";
        cin>>theStudent[i].UAS;
    }
    cout<<"Students Data"<<endl;
    for (int i=0;i<n;i++) {
        m = (theStudent[i].UAS + theStudent[i].UTS) / 2;
        cout<<theStudent[i].name.firstname<< " ";
        cout<<theStudent[i].name.lastname<< endl;
        cout<<theStudent[i].idNum<< endl;
        cout<<m<< endl;
}

return 0;

}
