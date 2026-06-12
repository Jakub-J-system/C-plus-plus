#include <iostream>
using namespace std;

struct Samochod{
    string marka,model;
    int rok;
};

void WyswietlDane(Samochod s){
    cout<<s.marka<<"\n"<<s.model<<"\n"<<s.rok;
}

int main(){
    Samochod s{"Toyota","Corolla",2018};
    WyswietlDane(s);
}