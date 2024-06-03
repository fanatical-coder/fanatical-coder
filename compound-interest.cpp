#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double p,t,r,c,z,comp,v,b;

    cout << "Enter the principle amount - ";
    cin >> p;
    cout << " Enter the time of investment - ";
    cin >> t;
    cout << "Enter the rate of interest - ";
    cin >> r;
    cout << "Enter the number of times the interest is compounded -";
    cin >> z;

    c = (1 + r/z);
    v = z*t;
    
    b = pow(c , v);

    comp = p*b;

    cout << "the amount compoumds to - " << comp;

    return 0;
}