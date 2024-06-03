#include<iostream>
using namespace std;

int main(){
    float p,t,r,s;

    cout << "Enter the principle amount - ";
    cin >> p ;
    cout << "\nEnter the time of the investment - ";
    cin >> t ;
    cout << "\nEnter the rate of intrest - ";
    cin >> r ;

    s=p*t*r/100;

    cout << "The simple interest becomes" << s;

    return 0;
}