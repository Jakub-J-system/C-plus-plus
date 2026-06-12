#include <iostream>
using namespace std;
int main(){
    float height, weight, BMI;
    cout << "Podaj wage (w kg): ";
    cin >> weight;
    cout << "Podaj wzrost (w metrach): ";
    cin >> height;
    
    BMI = weight/(height*height);
    cout << "Twoje BMI wynosi: " << BMI << endl;
    cout << "Twoj stan wagowy: ";
    if(BMI < 18.5)
    {
        cout << "Niedowaga";
    }
    else
    {
        if(BMI < 25)
        {
            cout << "W normie";
        }
        else
        {
            if(BMI < 30)
            {
                cout << "Nadwaga";
            }
            else
            {
                cout << "Otyłość";
            }
        }
    }
    
    return 0;
}