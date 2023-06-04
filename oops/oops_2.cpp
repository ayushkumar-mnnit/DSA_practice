 
/* Access modifiers : 

public: class properties can be accessed anywhere once defined .
private: class properties can be accessed only inside the class only.
protected: 

note: by default, every class is private.*/

#include<iostream>
using namespace std;

class student{
    public: // now 'name' and 'rollno' can be accessed outside this class also.
    string name;
    char section;
    int rollno;
    private:
    int id=56;
    
};

int main(){

student s1;
student s2;

s1.name="Ayush";
s1.rollno=16;
s1.section='A';

 cout<<s1.name<<endl;

 cout<<s1.section<<endl;

 cout<<s1.rollno<<endl;

//  cout<<s1.id<<endl; this shows error becoz 'id' is private type and we are trying to access it outside the class. 

return 0;
}

/* now if we want to access the private properties outside the class then we can't use any direct method ,
here  we use 'getter' and 'setter' functions */

