#include <iostream>
using namespace std;

void sum_of_nat_numbers(int x)
{
    int j, s = 0;
    for (j = 0; j <= x; j++)
    {
        s = s + j;
    }
    cout << "sum = " << s;
}

int main()
{

    int a;

    cout << "Enter a number - ";
    cin >> a;

    sum_of_nat_numbers(a);
    return 0;
}