#include <iostream>
using namespace std;
int main(){
    int wiersze, kolumny;


    cout << "Podaj wysokosc dywanu: ";
    cin >> wiersze;
    cout << "Podaj szerokosc dywanu: ";
    cin >> kolumny;

    for (int i = 1; i <= wiersze; i++) {

        for (int j = 1; j <= kolumny; j++) {
            if(i==1||i==wiersze)
            {
                cout << "-";
            }
            else
            {
                if(j==1||j==kolumny)
                {
                    cout << "|";
                }
                else
                {
                    if((i+j)%2 == 0)
                    {
                        cout << "#";
                    }
                    else{
                        cout << "*";
                    }
                    
                }
            }
            
        }

        cout << endl;
    }
    return 0;
}