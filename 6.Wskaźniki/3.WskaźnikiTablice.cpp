#include <iostream>
using namespace std;

int ObliczSume(int *tab, int size) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        suma += tab[i];
    }
    return suma;
}

int main() {
    int tab[4] = {10, 10, 10, 20};
    int size = 4;

    cout << "Suma elementow tablicy: " << ObliczSume(tab, size) << endl;

    for (int i = 0; i < size; i++) {
        cout << "Podaj nowa wartosc dla elementu " << i << ": ";
        cin >> *(tab + i);
    }

    cout << "Nowa tablica:\n";
    for (int i = 0; i < size; i++) {
        cout << *(tab + i) << " ";
    }

    cout << "\nNowa suma elementow tablicy: " << ObliczSume(tab, size) << endl;

    return 0;
}