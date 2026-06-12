#include <iostream>
using namespace std;
int main(){
    int a;
    char b;
    
    do
    {
        cout << "Podaj liczbe: ";
        cin >> a;
    
        cout << "Wprowadziłeś liczbę "<< a << endl;
        
        cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
        cin >> b;
        
        
    }while(b == 't');
    cout << "Dziekuje za wprowadzenie liczb!";
    return 0;
}