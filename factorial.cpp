#include <iostream>
using namespace std;

int main()
{
    int a, f = 1, i;

    cout << "Enter a number to find the factorial - ";
    cin >> a;

    for (i = 1; i <= a; i++)
    {
        f = f * i;
    }
    cout << "Factorial of entered number - " << f;
    return 0;
}