#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the interval to calcualte prime number between it -";
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        bool isprime=true;
        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                isprime=false;
                break;
            }
            
        }
        if(isprime&& i>1){
            cout<< i << " ";
        }
    }
}




       
