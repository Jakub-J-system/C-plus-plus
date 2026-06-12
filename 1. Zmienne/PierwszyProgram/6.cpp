#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Podaj A: ";
    cin >> a;
    cout << "Podaj B: ";
    cin >> b;
    
    c = a+b;
    cout << "Suma: " << c << endl;
    
    if(c%2){
        cout << "Liczba jest nieparzysta" << endl;
    }
    else{
        cout << "Liczba jest parzysta" << endl;
    }
    return 0;
}