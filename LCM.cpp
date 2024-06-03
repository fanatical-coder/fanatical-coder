#include <iostream>

using namespace std;

int gcd(int x, int y)
{
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int lcm(int x, int y)
{
    return (x * y) / gcd(x, y);
}

int main()
{
    int a, b, c;

    cout << "enter the two numbers - ";
    cin >> a >> b;

    c = lcm(a, b);

    cout << "The L.C.M. of the entered numbers is " << c;

    return 0;
}
