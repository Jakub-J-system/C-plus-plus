#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LosujTablice(int *tab, int size, int start, int end) {
    for (int i = 0; i < size; i++) {
        tab[i] = start + rand() % (end - start + 1);
    }
}

bool SprawdzLiczbe(int *liczba, int *tab, int size) {
    for (int i = 0; i < size; i++) {
        if (*liczba == tab[i])
            return true;
    }
    return false;
}

int main() {
    srand(time(NULL));

    int n, start, end;

    cout << "Ile liczb wylosowac: ";
    cin >> n;

    cout << "Wartosc poczatkowa: ";
    cin >> start;

    cout << "Wartosc koncowa: ";
    cin >> end;

    int tab[100];

    LosujTablice(tab, n, start, end);

    //cout << "Tablica: ";
    for (int i = 0; i < n; i++)
        //cout << tab[i] << ", ";
    cout << endl;

    int liczba, proby = 0;

    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        proby++;

        if (SprawdzLiczbe(&liczba, tab, n))
            cout << "Zgadles!" << endl;
        else
            cout << "Nie zgadles" << endl;

    } while (!SprawdzLiczbe(&liczba, tab, n));

    cout << "Zgadles za " << proby << " razem." << endl;

    return 0;
}