#include <iostream>

using namespace std;

class Samochod
{
public:

    string marka;
    string model;
    int rocznik;
    int przebieg;

    void wczytaj_samochod()
    {
        cout<< endl;
        cout<< "NOWE AUTO DO BAZY: "<<endl;
        cout<< "Podaj marke: ";
        cin >> marka;
        cout<< "Podaj model: ";
        cin >> model;
        cout<< "Podaj rocznik: ";
        cin >> rocznik;
        cout<< "Podaj przebieg: ";
        cin >> przebieg;
    }
    void wypisz_cechy()
    {
        if (marka=="BMW") cout<<marka<<" "<<model<<" rocznik: "<<rocznik<<" przebieg: "<<przebieg<<"km"<<endl;
        else if (marka=="Mercedes") cout<<marka<<" "<<model<<" rocznik: "<<rocznik<<" przebieg: "<<przebieg<<"km"<<endl;
        else if (marka=="AlfaRomeo") cout<<marka<<" "<<model<<" rocznik: "<<rocznik<<" przebieg: "<<przebieg<<"km"<<endl;
        else cout<< "Nieznana marka!";
    }
};

int main()
{
   Samochod s1;
   s1.wczytaj_samochod();
   s1.wypisz_cechy();

   Samochod s2;
   s2.wczytaj_samochod();
   s2.wypisz_cechy();

    return 0;
}
