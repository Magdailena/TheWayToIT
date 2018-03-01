#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>


using namespace std;

int liczba, strzal, ile_prob=0;

int main()
{
    cout << "Witaj! Pomyslalam sobie liczbe 1-100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;


    while (strzal!=liczba)
    {
        ile_prob++;
        cout << "Zgadnij jaka (to Twoja"<<ile_prob<<" proba)";
        cin>> strzal;

        if (strzal==liczba)
        cout<< "Wygrales w "<<ile_prob<<" probie"<< endl;

        else if (strzal<liczba)
        cout <<"Za mala liczba!" <<endl;

        else if (strzal>liczba)
        cout <<"Za duza liczba!" <<endl;

    }
    getchar();

    return 0;
}
