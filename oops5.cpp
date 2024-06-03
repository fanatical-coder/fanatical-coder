#include <iostream>
using namespace std;
class base{};
class derived:public base{};
int main(){
derived d;
try{
cout<<"--Example of EXCEPTION HANDLING in inheritance--\n";
throw d;}
catch(base b)
{cout<<"catch block for base exception";}
catch(derived d)
{cout<<"catch block for derived exception";}
return 0;
}