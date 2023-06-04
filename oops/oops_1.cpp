
//                             classes and objects :

/* Class is a detailed description, the definition, and the template of what an object will be.
It is a user-defined data type, that holds its own data members and member functions, 
which can be accessed and used by creating an instance of that class. It is the blueprint of any object.
Once we have written a class and defined it, we can use it to create as many objects based on that class as we want.

Object is an instance of a class. All data members and member functions of the class can be accessed
with the help of objects. When a class is defined, no memory is allocated,
but memory is allocated when it is instantiated (i.e. an object is created). */


#include<iostream>
using namespace std;

class student{

    string name; // here name and rollno are 'properties' or 'attributes' under class student
    int rollno;

};

class employee{

};

int main(){

student s1; // s1 is an object of class student
employee e1; // e1 is an object of class employee



cout<<sizeof(student)<<endl; // size of class is equal to net memory alloted to all the properties of class.

cout<<sizeof(employee)<<endl; /* when no property present ,still 1 byte is alloted to the class for
                                 its unique identification in memory block */

return 0;
}