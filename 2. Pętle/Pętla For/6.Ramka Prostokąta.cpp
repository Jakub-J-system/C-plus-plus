#include <iostream>
using namespace std;
int main(){
    int wiersze, kolumny;


    cout << "Podaj liczbe wierszy: ";
    cin >> wiersze;
    cout << "Podaj liczbe kolumn: ";
    cin >> kolumny;

    for (int i = 1; i <= wiersze; i++) {

        for (int j = 1; j <= kolumny; j++) {
            if((i==1||i==wiersze)||(j==1||j==kolumny))
            {
                cout << "*" << "\t";
            }
            else
            {
                cout << " " << "\t";
            }
            
        }

        cout << endl;
    }
    return 0;
}