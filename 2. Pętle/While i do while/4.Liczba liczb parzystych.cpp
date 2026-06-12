#include <iostream>
using namespace std;
int main(){
    int N, wynik;
    cout << "Podaj liczbe N: ";
    cin >> N;
    
    cout << endl << "Liczba liczb parzystych od 1 do "<< N << ": ";
    int i = 1;
    wynik = 0;
    while(i<=N)
    {
        if(i%2 == 0)
        {
            wynik++;
        }
        i++;
    }
    cout << wynik;
    return 0;
}