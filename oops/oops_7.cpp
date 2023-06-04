
// Destructor: 

/* when the lifetime of the object is about to end , destructor is called automatically .
destructor de-allocates the allocated memory. it has also no input parameter + no return type like constructor.
for the static allocation , default destructor is called automatically by default but for dynamic allocation
we have to create custom destructor and call it manually. Also, when custom destructor is created then 'default' is killed
so same is called for static allocation as well. */


#include<iostream>
using namespace std;

class numbers{
     public:
     int prime;
     int whole;

numbers(){

    cout<<"\nConstructor called !! \n"<<endl;

    }
     ~numbers(){   // representation of constructor and detsructor almost same only difference is ~ tilde symbol.
    cout<<"\nDestructor called !! "<<endl;
    }

};

int main(){

numbers x;
x.prime=2;
x.whole=0;

/* first constructor is called-> memory is allocated->execution in main() occurs 
then destructor is called and memory is de-allocated  */

cout<<"1st prime number is: "<<x.prime<<endl;
cout<<"Neutral whole number is: "<<x.whole<<endl; // after this line destructor is actually called .

return 0;
}



/* Note:
 1. constructors an destructors are called only once for a particular object.
 2.custom always kills default
*/


// H.W. -> constant keyword , its application in object creation and function of type const + initialistation list.