#include <iostream>
using namespace std;
int main(){
    string name;
    int age;
    
    cout << "Podaj swoje imię: ";
    cin >> name;
    cout << "Podaj swój wiek: ";
    cin >> age;
    
    
    cout << "Witaj, " << name << "! Masz " << age << " lat." << endl;
    return 0;
}