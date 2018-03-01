#include <iostream>

using namespace std;

int funkcja_f (int argument_n)
{
    if (argument_n==0) return 3;
    else return funkcja_f(argument_n - 1)+2;
}
long int potega (int podstawa, int wykladnik)
{
    if (wykladnik==0) return 1;
    else return podstawa*potega(podstawa, wykladnik-1);
}

int main()
{

    cout << funkcja_f(3) << endl;
    cout << potega(3,4) << endl;

    return 0;
}
