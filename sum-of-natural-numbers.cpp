#include <iostream>
using namespace std;

int main()
{

    int a, i, s = 0;

    cout << "Enter a number - ";
    cin >> a;

    for (i = 0; i <= a; i++)
    {
        s = s + i;
    }
    cout << "sum = " << s;

    return 0;
}