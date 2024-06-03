#include<iostream>
using namespace std;

int main(){
    float a,c;

    cout << "enter the temprature in celcius";
    cin >> a;

    c=(a*9/5)+32;

    cout << "Temperature in fahrenheit is" << c;

    return 0;
}