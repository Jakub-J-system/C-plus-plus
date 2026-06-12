#include <iostream>
using namespace std;

int main() {
    int liczby[5];
    int suma = 0;
    float srednia;

    for (int i = 0; i < 5; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczby[i];
    }

    for (int i = 0; i < 5; i++) {
        suma += liczby[i];
    }

    srednia = suma / 5.0;
    cout << "Średnia liczb: " << srednia << endl;

    return 0;
}