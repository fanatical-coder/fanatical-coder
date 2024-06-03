#include <iostream>
using namespace std;

int main() {
    int numTerms;
    
    cout << "Enter the number of terms for the Fibonacci sequence: ";
    cin >> numTerms;

    
    int a = 0, b = 1;
    cout << "Fibonacci sequence up to " << numTerms << " terms:" << endl;
    cout << a << " " << b << " "; 
    
    
    for (int i = 3; i <= numTerms; i++) {
        int next = a + b;
        cout << next << " "; 
        a = b;
        b = next;
    }
    
    return 0;
}
