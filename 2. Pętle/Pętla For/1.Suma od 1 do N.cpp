#include <iostream>
using namespace std;
int main(){
    int N, wynik;
    cout << "Podaj liczbe N: ";
    cin >> N;
    
    cout << endl << "Suma liczb od 1 do "<< N << " wynosi : ";
    wynik = 0;
    for(int i = 1; i <= N; i++)
    {
        wynik = wynik + i;
    }
    
    cout << wynik;
    return 0;
}