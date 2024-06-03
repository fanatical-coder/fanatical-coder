#include<iostream>
using namespace std;

float mul_floatnumbers(float a, float b){
    return a*b;
}

int main(){
    float num1=5.67;
    float num2=6.45;
    float product;


    product = mul_floatnumbers(num1, num2);

    cout << product;

    return 0;
}
