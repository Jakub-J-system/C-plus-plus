#include <iostream>
using namespace std;

const double PI = 3.1415;

//Sześcian
double CalculateVolume(double a) {
    return a * a * a;
}

//Prostopadłościan
double CalculateVolume(double a, double b, double h) {
    return a * b * h;
}

//Walec
double CalculateVolume(double r, double h, bool isCylinder) {
    return PI * r * r * h;
}

void DisplayResult(double v) {
    cout << "Objetosc wynosi: " << v << endl;
}

int main() {
    int wybor;

    cout << "Wybierz bryle do obliczenia objetosci:\n";
    cout << "1 - Szescian (V = a^3)\n";
    cout << "2 - Prostopadloscian (V = a * b * h)\n";
    cout << "3 - Walec (V = pi * r^2 * h)\n";

    cout << "Wybierz numer bryly: ";
    cin >> wybor;

    if (wybor == 1) {
        double a;
        cout << "Podaj bok: ";
        cin >> a;

        DisplayResult(CalculateVolume(a));
    }
    else if (wybor == 2) {
        double a, b, h;
        cout << "Podaj dlugosc: ";
        cin >> a;
        cout << "Podaj szerokosc: ";
        cin >> b;
        cout << "Podaj wysokosc: ";
        cin >> h;

        DisplayResult(CalculateVolume(a, b, h));
    }
    else if (wybor == 3) {
        double r, h;
        cout << "Podaj promien: ";
        cin >> r;
        cout << "Podaj wysokosc: ";
        cin >> h;

        DisplayResult(CalculateVolume(r, h, true));
    }
    else {
        cout << "Zly wybor!" << endl;
    }

    return 0;
}