#include <iostream>; using namespace std; int add(int a, int b)
{

int c = a + b; return c;
}

int main()

{

int a, b, sum;

cout << "enter value of a :" << endl; 

cin >> a;

cout << "enter value of b is:" << endl; 

cin >> b;
sum = add(a, b);

cout << " the addition of number is" << sum << endl; return 0;
}
