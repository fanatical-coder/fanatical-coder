#include<iostream>
using namespace std;

int main(){
    int a;

    cout << "enter a integer";
    cin >> a;

    if (a % 2 == 0){
        cout << "Entered number is even";
    }
    else if(a % 2 != 0){
        cout << "Entered number is odd";
    }
    return 0;
}