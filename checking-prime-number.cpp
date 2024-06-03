#include <iostream>
using namespace std;

int main()
{

    int a, k;
    cout << "Enter a number to check if it is a prime or not -";
    cin >> a;

    if (a <= 1)
    {
        cout << "Enter a valid number greater than 1";
    }
    for (int i = 2; i <= a / 2; i++)
    {
      
        if (a % i == 0)
        {
            k = 0;
            break;
        }
        else
        {
            k = 1;
        }

    }

    if (k == 0)
    {
        cout << "the number is not prime ";
    }
    else
    {
        cout << "the number is prime";
    }
}