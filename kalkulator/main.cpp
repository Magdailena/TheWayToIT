#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>


using namespace std;

float x,y;
char wybor;

int main()
{
    for(;;)
    {
    cout <<endl;
    cout << "Podaj liczbe 1: " << endl;
    cin>>x;
    cout << "Podaj liczbe 2: " <<endl;
    cin>>y;

    cout<<endl;
    cout<< "Menu glowne" << endl;
    cout<< "---------------"<<endl;
    cout<< "1.Dodawanie"<<endl;
    cout<< "2.Odejmowanie"<<endl;
    cout<< "3.Mnozenie"<<endl;
    cout<< "4.Dzielenie"<<endl;
    cout<< "5.Wyjdz"<<endl;


    cout<< endl;
    wybor = getch();

    switch(wybor)

    {
    case '1':
        cout << "suma= "<< x+y<<endl;
        break;

    case '2':
        cout<< "roznica= "<<x-y<<endl;
        break;

    case '3':
        cout<< "iloraz= "<<x*y<<endl;
        break;

    case '4':
        if (y==0) cout<<"Nie dzielimy przez 0!";
        else cout<< "iloczyn= "<<x/y<<endl;
        break;

    case '5':
        exit(0);
        break;


    default: cout << "Nie ma takiej opcji w menu!";
    }
    }
getchar();
    system("cls");
    return 0;
}
