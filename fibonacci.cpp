#include <iostream>
using namespace std;

void generateFibonacci(int n) {
    int a = 0, b = 1;
    
    cout << "Fibonacci sequence up to " << n << " terms:" << endl;
    cout << a << " "; 
    
    for (int i = 1; i < n; i++) {
        cout << b << " "; 
        
        int next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int numTerms;
    
    cout << "Enter the number of terms for the Fibonacci sequence: ";
    cin >> numTerms;
    
    generateFibonacci(numTerms);
    
    return 0;
}
