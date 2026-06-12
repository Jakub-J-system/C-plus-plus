#include <iostream>
using namespace std;

struct Osoba{
    string imie,nazwisko;
    int wiek;
};

int main(){
    Osoba o[3]={
        {"Jan","Kowalski",25},
        {"Anna","Nowak",30},
        {"Piotr","Wisniewski",40}
    };

    for(int i=0;i<3;i++)
        cout<<i+1<<". "<<o[i].imie<<" "<<o[i].nazwisko<<" "<<o[i].wiek<<"\n";
}