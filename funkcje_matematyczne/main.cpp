#include <iostream>
#include <math.h>

using namespace std;

int prawidlowa_odp=31;
int odp_Ricka;
int odp_Daryla;
int roznica1;
int roznica2;

int main()
{
    cout << "Ile razy LA Lakers wystapili w finale NBA?" << endl;
    cout << "Rick: "; cin>>odp_Ricka;
    cout << "Daryl: "; cin>>odp_Daryla;

    roznica1=fabs(prawidlowa_odp-odp_Ricka);
    roznica2=fabs(prawidlowa_odp-odp_Daryla);

    if (roznica1<roznica2) cout<<"Wygral Rick!";
    else if (roznica1>roznica2) cout<<"Wygral Daryl!";
    else cout<<"Remis!";
    return 0;
}
