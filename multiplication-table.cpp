#include <iostream>
using namespace std;

int main()
{
    int a, i;

    cout << "Enter a integer - ";
    cin >> a;

    for (i = 0; i <= 100; ++i)
    {
        cout << a << " * " << i << " = " << a * i << endl;
    }
    return 0;
}