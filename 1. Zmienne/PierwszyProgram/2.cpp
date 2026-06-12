#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Podaj A: ";
    cin >> a;
    cout << "Podaj B: ";
    cin >> b;
    
    c = a+b;
    cout << "Suma: " << c << endl;
    c = a-b;
    cout << "Różnica: " << c<< endl;
    c = a*b;
    cout << "Iloczyn: " << c<< endl;
    return 0;
}