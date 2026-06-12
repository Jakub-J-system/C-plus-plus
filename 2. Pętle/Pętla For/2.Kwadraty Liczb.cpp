#include <iostream>
using namespace std;
int main(){
    int N, wynik;
    cout << "Podaj liczbe N: ";
    cin >> N;
    
    cout << endl << "Kwadraty liczb od 1 do "<< N << ": " << endl;
    
    for(int i = 1; i <= N; i++)
    {
        wynik = i*i;
        cout << i << "^2 = " << wynik <<endl;
    }
    return 0;
}