
// Static kyeword and function: 

#include<iostream>
using namespace std;

class marvel{

    public:
    string character;
    int health;


    static int time; // declaration declarartion inside as usual like other data types 

    static int Time(){
        return time;
    }
};


int marvel::time=10;   // intialisation: outside the class

int main(){

marvel c1;
marvel c2;

c1.health=1000;
c1.character="Hulk";
c2.character="Loki";
c2.health=1010;

// static data member belongs to class not to any of object so we can access its data without creating any class.

cout<<"\n"<<c1.character<<" ,"<<c1.health<<endl;
cout<<"\n"<<c2.character<<" ,"<<c2.health<<endl;

cout<<"\ntime ( in minutes ) to complete the game of hulk vs loki fight= "<<marvel::time<<"\n"<<endl;

/* static functions are also like static key word , no need to create any object for them instead class but 
only static data members can be accesed through them. */

cout<<"\nTime through 'static Time function' : "<<marvel::Time()<<"\n"<<endl;
return 0;
}


