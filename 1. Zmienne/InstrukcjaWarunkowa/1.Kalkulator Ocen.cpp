#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Podaj wynik egzaminu (liczba punktów): ";
    cin >> a;
    if(a<0 || a>100){
        cout << "Podana liczba jest z poza zakresu od 0 do 100.";
        return 0;
    }
    cout << "Ocena: ";
    if(a<50)
    {
        cout << "niedostateczna";
    }
    else
    {
        if(a<70)
        {
            cout << "dostateczna";
        }
        else
        {
            if(a<85)
            {
                cout << "dobra";
            }
            else
            {
                if(a<100)
                {
                    cout << "bardzo dobra";
                }
                else
                {
                    cout << "celująca";
                }
            }
        }
    }
    
    return 0;
}