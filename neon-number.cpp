#include <iostream>
using namespace std;

int sumofdigit(int x)
{
    int sum = 0;

    while (x > 0)
    {

        sum += x % 10;
        x /= 10;

    }
    return sum;

}

int main()
{
    int a, c;

    cout << "Enter the number to find if it is a neon number - ";
    cin >> a;

    c = a * a;

    cout << c;

    int sum = sumofdigit(c);
    if (sum == a) { // Compare the sum with the original number 'a'
        cout << "\nEntered number is a neon number" << endl;
    } else {
        cout << "\nEntered number is not a neon number" << endl;
    }

return 0;
}