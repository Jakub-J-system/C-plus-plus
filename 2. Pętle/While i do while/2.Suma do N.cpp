#include <iostream>
using namespace std;
int main(){
    int N, wynik;
    cout << "Podaj liczbe N: ";
    cin >> N;
    
    cout << endl << "Suma liczb naturalnych do "<< N << ": ";
    int i = 1;
    wynik = 0;
    while(i<=N)
    {
        wynik = wynik+i;
        i++;
    }
    cout << wynik;
    return 0;
}