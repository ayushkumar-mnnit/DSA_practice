
/* Bitwise operators: 

&  AND
|  OR
~  NOT
^  XOR
<<  LEFT SHIFT
>>  RIGHT SHIFT


*/



#include<iostream>
using namespace std;
int main(){

int a=2;
int b=5;

cout<<(a&b)<<endl;

int c=7;
int d=4;

cout<<(c|d)<<endl;

int e=6;

cout<<(b^e)<<endl;

cout<<(~b)<<endl;


int x=5; 
int y=3;

cout<<(x<<1)<<endl;
cout<<(y<<2)<<endl;

cout<<(5>>1)<<endl;

return 0;
}


/* Increment -decrement operators:

a++  post increment
++a  pre increment
a--  post decrement
--a  pre decrement

*/


#include<iostream>
using namespace std;

int main(){

int a1=5;
int a2=3;

cout<<"a1= "<<a1<<endl;
int sum=a2+(a1++);

cout<<"sum= "<<sum<<endl;
cout<<"a1= "<<a1<<endl;

int x=4;
int y=8;

cout<<"x= "<<x<<endl;
int d=y-(--x);
cout<<"difference= "<<d<<endl;
cout<<"x= "<<x<<endl;


return 0;
}
 

