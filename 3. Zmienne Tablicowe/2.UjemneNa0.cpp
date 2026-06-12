#include <iostream>
using namespace std;

int main() {
    int liczby[5];


    for (int i = 0; i < 5; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczby[i];
    }
    
    cout << "Liczby ujemne zamienione na 0: ";
    for (int i = 0; i < 5; i++) {
        if(liczby[i]<0)
            liczby[i]=0;
        cout << liczby[i] << ", ";
    }


    return 0;
}