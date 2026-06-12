#include <iostream>
using namespace std;
int main(){
    int a, wynik;
    char znak;
    cout << "Podaj liczbe godzin parkowania: ";
    cin >> a;
    
    cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    cin >> znak;
    
    switch(znak)
    {
        case 'S':
            wynik= a*5;
            break;
        case 'M':
            wynik= a*3;
            break;
        case 'A':
            wynik= a*10;
            break;
        default:
            cout << "Nie ma takiego typu pojazdu.";
            return 0;
    }
    cout << "Oplata za parkowanie: " << wynik << endl;
    return 0;
}