#include <iostream>
using namespace std;
int main(){
    float C, wynik;
    char znak;
    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> C;
    
    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> znak;
    
    switch(znak)
    {
        case 'K':
            wynik= C + 273.15;
            cout << "Temperatura w stopniach Kelvina: " << wynik << endl;
            break;
        case 'F':
            wynik= (C * 9/5) + 32;
            cout << "Temperatura w stopniach Fahrenheita: " << wynik << endl;
            break;
        default:
            cout << "Nie ma takiego typu temperatury.";
            return 0;
    }

    return 0;
}