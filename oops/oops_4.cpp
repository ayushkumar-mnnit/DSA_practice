
// static and dynamic allocation :

#include<iostream>
using namespace std;

class life{
    public:
    int struggle;

};

int main(){

// static allocation:

cout<<"After static allocation\n";

life s1; 
s1.struggle=1;
cout<<"\nstruggle in life is= "<<s1.struggle<<endl;

// dynamic allocation:

cout<<"\nAfter dynamic allocation\n";

life *s2=new life;
(*s2).struggle=0;
cout<<"\nstruggle in life is= "<<(*s2).struggle<<endl;

// in place of dereference operator '*'  , arrow operator '->' can also be used 

cout<<"\nstruggle after using arrow operator= "<<s2->struggle<<endl;

return 0;
}