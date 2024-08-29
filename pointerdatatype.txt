//Ishaan Kukade
 //23070123062
#include<iostream>
#include<string>
using namespace std; 

int main()
{
    int a=10;
    float b=10;
    char c=10;
    int *aptr=&a;
    float *bptr=&b;
    char *cptr=&c;
    
    cout<<"for integer"<<endl;
    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;
    
    cout<<"for float"<<endl;
    cout<<bptr<<endl;
    bptr++;
    cout<<bptr<<endl;
    cout<<"for character"<<endl;
    cout<<cptr<<endl;
    cptr++;
    cout<<cptr<<endl;
    
    return 0;
}
/* for integer
0x7ffc8a9e9bd4
0x7ffc8a9e9bd8
for float
0x7ffc8a9e9bd0
0x7ffc8a9e9bd4*/