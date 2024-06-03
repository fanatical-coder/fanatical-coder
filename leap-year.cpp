#include<iostream>
using namespace std;

int main(){
    int a;

    cout << "Enter the year - ";
    cin >> a;

    if(a % 4 == 0 ){
        cout << "Entered year is a leap year";
    }else{
        cout << "Entered year is not a leap year";
    }

    return 0;


}