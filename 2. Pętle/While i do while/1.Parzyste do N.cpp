#include <iostream>
using namespace std;
int main(){
    int N;
    cout << "Podaj liczbe N: ";
    cin >> N;
    
    cout << endl << "Liczby parzyste od 2 do "<< N << ":"<<endl;
    int i = 2;
    while(i<=N)
    {
        cout << i << endl;
        i=i+2;
    }
    
    return 0;
}