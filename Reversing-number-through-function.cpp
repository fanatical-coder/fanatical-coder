#include<iostream>
using namespace std;

int main(){


    int a, x=0, l,r=0;
    cout << "Enter a number to reverse it - ";
    cin >> a;

    if(a==0){
        cout << "Bitch, enter a fucking number";
    }

    while (a!=0){
        l=a%10;
        r=r*10+l;
        a /=10;
    }

    cout << "\nReversed number is " << r;


    return 0;

}