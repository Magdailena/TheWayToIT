#include <iostream>

using namespace std;

int funkcja_f (int argument_n)
{
    if (argument_n==0) return 3;
    else return funkcja_f(argument_n - 1)+2;
}

int main()
{

    cout << funkcja_f(3) << endl;
    return 0;
}
