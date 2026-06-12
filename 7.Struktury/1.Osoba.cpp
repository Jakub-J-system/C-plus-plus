#include <iostream>
using namespace std;

struct Osoba{
    string imie,nazwisko;
    int wiek;
};

int main(){
    Osoba o{"Jan","Kowalski",25};

    cout<<"Przed:\n"<<o.imie<<" "<<o.nazwisko<<" "<<o.wiek<<"\n";

    o.wiek=30;

    cout<<"Po:\n"<<o.imie<<" "<<o.nazwisko<<" "<<o.wiek;
}