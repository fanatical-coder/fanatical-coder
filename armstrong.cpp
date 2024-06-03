#include <iostream>
#include <math.h>

using namespace std;

int armstrongcalc(int x)
{
    int i = 0, temp = x, r, b = 0, k;
    while (temp > 0)
    {
        temp /= 10;
        i++;
    }
    cout << "\nthe number of digit is " << i << "\n";

    temp = x;

    while (temp > 0)
    {
        r = temp % 10;
        temp /= 10;
        k = pow(r, i);
        b += k;
    }
    return b;
}

int main()
{
    int a;

    cout << "Enter a number to check for Armstrong number: ";
    cin >> a;

    int s = armstrongcalc(a);

    if (s == a)
    {
        cout << "\nEntered number is an Armstrong number";
    }
    else
    {
        cout << "\nEntered number is not an Armstrong number";
    }
    return 0;
}