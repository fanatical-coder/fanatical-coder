#include<iostream>
using namespace std;

int main(){
    int a , b, c;

    cout << "Enter three numbers- ";
    cin >> a >> b >> c;

    if (a>=b && a>=c ){
        cout << "greatest number is 2" << a;
    } else if(b>=c && b>=a) {
        cout << "greatest number is " << b;
    } else  {
        cout << "greatest number is " << c;
    }


    return 0;



}