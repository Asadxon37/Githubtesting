#include <iostream>
using namespace std;

void addContact(string *name, string *phone, string Ism, string Nomer,int &total) {
    cout<<"Contact added:"<<endl;
    name[total]=Ism;
    phone[total]=Nomer;
    cout<<Ism<<" "<<Nomer;
    total++;
}
void searchContact(string *name, string *phone,string cont,int &total) {
    int found=0;
    for(int i=0;i<total;i++) {
        if(cont==name[i]) {
            cout<<"Contact found"<<endl;
            cout<<phone[i]<<endl;
            found++;
            break;
        }
    }
    if(found==0) {cout<<"Contact not found"<<endl;
    }
}
int deleteContact(string *name, string *phone, string cont,int &total) {
    int sanoq=0;
    for(int i=0;i<total;i++) {
        if(cont==name[i]) {
            cout<<"Contact deleted"<<endl;
            sanoq++;
            break;
        }
        if(sanoq==0) {cout<<"Contact not found"<<endl;}
    }
}
int main() {
    int count = 0;
    string *name=new string[500];
    string *number=new string[500];
    cout<<"Enter your name:"<<endl;
    string ism;
    cin>>ism;
    cout<<"Enter your number:"<<endl;
    string nomer;
    cin>>nomer;
    addContact(name,number,ism,nomer,count);
    cout<<endl;
    cout<<"Search: "<<endl;
    string search;
    cin>>search;
    searchContact(name, number, search, count);
    cout<<endl;
    cout<<"Search for deleting: "<<endl;
    string delname;
    cin>>delname;
    deleteContact(name, number, delname, count);
    return 0;


}
