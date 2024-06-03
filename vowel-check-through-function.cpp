#include <iostream>
using namespace std;

bool vowel_check(char ch){
    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        cout << "Entered alphabet is a vowel.";
    } 
    else{
        cout << "Entered alphabet is a consonant.";
    }
return 0;
}

int main()
{
    char x;

    cout << "Enter the alphabet - ";
    cin >> x;
    
    vowel_check(x);

return 0;

}