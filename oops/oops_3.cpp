
#include<iostream>
using namespace std;

class employee{
    private:
    int age;
    char id;

// here 'age' and 'id' are private properties so we use getter(),setter() functions :
public:

int getAge(){
    return age;
}

char getId(){
    return id;
}


void setAge(int x){
    age=x;
}


void setId(char y){
    id=y;
}

};


int main(){

employee e1;

e1.setAge(23);
e1.setId('A');

cout<<"\nAge of the employee is: "<<e1.getAge()<<endl;
cout<<"\nId is: "<<e1.getId()<<endl;

return 0;
}