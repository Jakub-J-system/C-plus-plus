#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Podaj liczbę całkowitą: ";
    cin >> a;

    
    
    if(a%2 == 0)
    {
        cout << "Liczba "<< a << " jest parzysta." << endl;
    }
    else
    {
        cout << "Liczba "<< a << " jest nieparzysta." << endl;
    }
    
    if(a%3 == 0)
    {
        cout << "Liczba "<< a << " jest podzielna przez 3.";
    }
    else
    {
        cout << "Liczba "<< a << " nie jest podzielna przez 3.";
    }
    
    return 0;
}