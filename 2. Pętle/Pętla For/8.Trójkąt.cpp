#include <iostream>
using namespace std;

int main() {
    int szerokosc, wysokosc;

    cout << "Podaj szerokosc: ";
    cin >> szerokosc;

    cout << "Podaj wysokosc: ";
    cin >> wysokosc;

    int margin = 0;

    for (int i = 0; i < wysokosc; i++) {

        for (int j = 0; j < szerokosc; j++) {

            if (j >= margin && j < szerokosc - margin)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
        margin++;
    }

    return 0;
}