#include <iostream>

using namespace std;

int predkosc1;
int predkosc2;
int ile;

int main()
{
    cin >> ile;

    for (int i=1; i<=ile; i++)
    {
        cin >> predkosc1 >> predkosc2;
        cout << 2*predkosc1*predkosc2/(predkosc1+predkosc2) <<endl;
    }

    return 0;
}
