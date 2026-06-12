#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    char znak;
    cout << "Podaj pierwszą liczbe: ";
    cin >> a;
    cout << "Podaj drugą liczbe: ";
    cin >> b;
    
    cout << "Podaj znak dzialania (+, -, *, /): ";
    cin >> znak;
    
    switch(znak)
    {
        case '+':
            c=a+b;
            break;
        case '-':
            c=a-b;
            break;
        case '*':
            c=a*b;
            break;
        case '/':
            c=a/b;
            break;
    }
    
    cout << "Wynik: " << c << endl;
    return 0;
}