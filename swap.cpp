#include<iostream>
using namespace std;

int main(){
    int a,b,temp;

    cout << " enter the numbers a and b\n";
    cin >> a >> b;

    temp=a;
    a=b;
    b=temp;

    cout << "A-" << a;
    cout << "\nB-" << b;


    return 0;
}