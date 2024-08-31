//Ishaan kukade
//23070123062
#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    string branch;
    int year;
    
};
int main() {
    student s1;
    s1.name="ishaan";
    s1.age=18;
    s1.branch="ENTC";
    s1.year=2;
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.branch<<endl;
    cout<<s1.year<<endl;
    return 0;
}
/* OUTPUT
ishaan
18
ENTC
2
*/
    