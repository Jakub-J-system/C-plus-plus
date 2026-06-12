#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    int *pA = &a;
    int *pB = &b;

    cout << "Przed modyfikacja:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    *pA = 15;
    *pB = 20;

    cout << "\nPo modyfikacji:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}