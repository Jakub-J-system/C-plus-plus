#include <iostream>
using namespace std;

double suma(double a, double b) { return a + b; }
double roznica(double a, double b) { return a - b; }
double iloczyn(double a, double b) { return a * b; }
double iloraz(double a, double b) { return a / b; }

int main() {
    int wybor;
    double a, b;

    while (true) {
        cout << "\nWybierz funkcje:\n";
        cout << "1. Suma\n2. Roznica\n3. Iloczyn\n4. Iloraz\n0. Wyjscie\n";
        cout << "Wybrana funkcja: ";
        cin >> wybor;

        if (wybor == 0) {
            cout << "Koniec programu." << endl;
            break;
        }

        cout << "Podaj pierwsza liczbe: ";
        cin >> a;
        cout << "Podaj druga liczbe: ";
        cin >> b;

        switch (wybor) {
            case 1: cout << "Wynik: " << suma(a, b) << endl; break;
            case 2: cout << "Wynik: " << roznica(a, b) << endl; break;
            case 3: cout << "Wynik: " << iloczyn(a, b) << endl; break;
            case 4: cout << "Wynik: " << iloraz(a, b) << endl; break;
            default: cout << "Zly wybor!" << endl;
        }
    }

    return 0;
}