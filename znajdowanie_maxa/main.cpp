#include <iostream>

using namespace std;

int liczba1, liczba2, liczba3, liczba_m;

int main()
{
    cout << "Podaj trzy liczby oddzielone spacja: " << endl;
    cin >> liczba1>>liczba2>>liczba3;

    liczba_m=liczba1;
    if (liczba2>liczba_m) liczba_m=liczba2;
    if (liczba3>liczba_m) liczba_m=liczba3;

    cout << "Najwieksza liczba to "<<liczba_m;


    /*if ((liczba1>=liczba2) && (liczba1>=liczba3))
        cout << "Najwieksza liczba to "<<liczba1;
    else if ((liczba2>=liczba1) && (liczba2>=liczba3))
        cout << "Najwieksza liczba to "<<liczba2;
    else if ((liczba3>=liczba1) && (liczba3>=liczba2))
        cout << "Najwieksza liczba to "<<liczba3;
    */
    return 0;
}
