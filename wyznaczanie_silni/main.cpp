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
long int fibonacci(int argument_n)
{
    if (argument_n==1 || argument_n==2) return 1;
    else return fibonacci(argument_n-1)+fibonacci(argument_n-2);
}
long int silnia(int argument_n)
{
    if (argument_n==0) return 1;
    else return argument_n*silnia(argument_n-1);
}

int main()
{

    cout << funkcja_f(3) << endl;
    cout << potega(3,4) << endl;
    cout << fibonacci(6) << endl;
    cout << silnia(1) << endl;

    return 0;
}
