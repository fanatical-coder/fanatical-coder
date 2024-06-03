#include <iostream>
using namespace std;

int main()
{
    char x;

    cout << "Enter the alphabet - ";
    cin >> x;

    
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
        cout << "Entered alphabet is a vowel.";
    } 
    else{
        cout << "Entered alphabet is a consonant.";
    }
return 0;

}