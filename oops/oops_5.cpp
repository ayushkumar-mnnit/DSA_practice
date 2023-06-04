
// contructors and 'this' keyword :

#include<iostream>
using namespace std;

class bakery{
    public:
    string cake;
    string pastries;

    // creating the custom constructor:

    bakery(){
        cout<<"\nConstructor called !!\n";   // this is proof that constructor is called when object is created.
    }

    // once the custom constructor is created then the default constructor vanishes.

};


int main(){

/* when we create object then the constructor associated with the class is called by default.
for ex. here for the object 'vanilla' , constructor 'vanilla()' is called the default constructor which
doesn't takes any input parameter.*/

bakery vanilla;

return 0;
}

/* we have seen the constructor without parameter, now we'll 
understand 'parameterised constructor' which will have input parameters. */






#include<iostream>
using namespace std;

class icecream{
    public:
    string flavour;

    icecream(string flavour){

        this->flavour=flavour; // 'this' is a pointer which stores the address of the current object 

        cout<<"\nconstructor called !!\n";
         cout<<"\nAddress stored in 'this' is : "<<this<<endl;
        
    }

};

int main(){
/* 
icecream van; 

this shows error becoz we already created a default parametrised constructor so
default constructor which is non-parametric is no more available, so when we try to create object'van' then non-parametric
constructor call is not possible hence, error is coming. 

*/

icecream choco("chocolate");     // here the contructor is parameterised so its 'choco("flavour")'

cout<<"\nflavour is : "<<choco.flavour<<endl;

cout<<"\nAddress of 'choco' is : " <<&choco<<endl;

cout<<"\nClearly the address of the object and the value of 'this' is same\n"<<endl;

return 0;
}

/* Note:
 1.constructor implementation is dynamic allocation is same as in static allocation.
2. static ---> . operator , dynamic----> * or -> operator */

