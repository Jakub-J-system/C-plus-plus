#include <iostream>
using namespace std;
int main(){
    int wiersze, kolumny;


    cout << "Podaj liczbe wierszy: ";
    cin >> wiersze;
    cout << "Podaj liczbe kolumn: ";
    cin >> kolumny;

    for (int i = 0; i <= (wiersze-1); i++) {

        for (int j = 0; j <= (kolumny-1); j++) {
            int a = 1+ i*kolumny*2 +j*2;
            cout <<  a << "\t";
        }

        cout << endl;
    }
    return 0;
}