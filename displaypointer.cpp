 //Ishaan Kukade
 //23070123062
#include<iostream>
#include<string>
using namespace std; 

int main()
{
    int a=10;
    int *aptr;
    aptr=&a;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;
    cout<<a<<endl;
   
    return 0;
}
/*OUTPUT
0x7ffef15a0964
0x7ffef15a0964
10
10
*/