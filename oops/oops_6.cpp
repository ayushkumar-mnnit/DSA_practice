
// copy constructor :


#include<iostream>
using namespace std;

class marvel{

    public:
    string character;
    int health;

    marvel(){

    }

    // custom copy constructor:

    marvel(marvel &x){
        
        cout<<"\nCopy constructor is called:\n ";
        
        this->character=x.character;
        this->health=x.health;
        
    }

};

int main(){

marvel c1;
c1.character="hulk";
c1.health=1000;

marvel c2(c1); // this way we can copy the attributes from one object to another 

// this copying done via default copy constructor , we can also create our custom copy constuctor.

cout<<"\nc1 is : "<<c1.character<<endl;
cout<<"\nHealth of c1 is : "<<c1.health<<endl;
cout<<"\nc2 is : "<<c2.character<<endl;
cout<<"\nHealth of c2 is : "<<c2.health<<endl;

return 0;
}


/* Note:

1.here also once custom copy constructor is created then copying is done via custom copy costructor only, and default vanishes.
2.value is 'passed by reference' in custom copy constructor not 'pass by value' */

// H.W. -  shallow and deep copy


#include<iostream>
using namespace std;

class college{
    public:
    string prof;
    string subject;
};

int main(){

college s1;
college s2;
s1.prof="Walter Lewin";
s1.subject="Physics";

s2.prof="HC verma";
s2.subject="Physics";



cout<<"\n"<<s1.prof<<endl;
cout<<s1.subject<<endl;

s1=s2; // Here this '=' sign is known as copy assignment operator so which copies the properties of s2 in s1.

cout<<"\nAfter copying s2 in s1 , the updated s1 is : \n"<<endl;
cout<<s1.prof<<endl;
cout<<s1.subject<<"\n"<<endl;


return 0;
}