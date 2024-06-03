#include <iostream>

using namespace std;

int palindrome(string str)
{

    int len = str.length();

    for (int i = 0; i < len / 2; i++)
    {

        if (str[i] != str[len - 1 - i])
            return false;
    }
    return true;
}

int main()
{

    string a;
    int z;

    cout << "Enter the number to check for palindrome -";
    cin >> a;

    z = palindrome(a);

    if (z == 1)
    {
        cout << "The number is a palindrome number";
    }
    else if (z == 0)
    {
        cout << "the number is not a palindrome number";
    }

    return 0;
}