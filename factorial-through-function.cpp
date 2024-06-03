#include <iostream>
using namespace std;

void factora(int z)
{
    int i, f = 1;

    for (i = 1; i <= z; i++)
    {
        f = f * i;
    }
    cout << "Factorial of entered number - " << f;
}

int main()
{
    int a;

    cout << "Enter a number to find the factorial - ";
    cin >> a;

    factora(a);

    return 0;
}