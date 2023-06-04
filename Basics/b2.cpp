
/* Fabonacci series:

0, 1, 1, 2, 3, 5, 8 ,13, 21, 34 ...

basically each successive nimber is obtained as a sum of previous two.

*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cout<<"Enter the number of terms required in Fabonacci series : ";
cin>>n;

int a=1;
int b=1;
int s=a+b;
vector<int> v;
v.push_back(a);
v.push_back(b);
v.push_back(s);
cout<<endl<<a<<" "<<b<<" "<<s<<" ";

for(int i=0;i<n-3;i++)
{

a=b; 
b=s;
s=a+b;

v.push_back(s);
cout<<s<<" ";



}
cout<<endl;
cout<<v[n-1];



return 0;
}


// // prime or not :

// #include<iostream>
// using namespace std;

// void checkprime(int n){
    
//     int prime=1;

//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {  
//         cout<<"Not Prime";
//         prime=0;
//         break;
//         }

    
//     }

//         if(prime==1){
//             cout<<"Prime";
//         }
     


//         }
// int main(){

// int n;
// cout<<"Number ? : ";
// cin>>n;

// checkprime(n);

// return 0;
// }



// // find the factorial :

// #include<iostream>
// using namespace std;

// // using recursion:

// int factorial(int n)
// {

//     if(n==0 || n==1)
//     {
//         return 1;

//     }
//     else
//     {
//         return n*factorial(n-1);
//     }

    
// }

// // using loop:

// // method-1:

// void fact(int n)
// {   int facto=n;
//     for(int i=2;i<n;i++)
//     {
//         facto=facto*i;
//     }

//     cout<<facto;
    
// }

// // method-2:

// void factor(int n)
// {   int fac=1;
//     for(int i=n;i>0;i--)
//     {
//         fac=fac*i;
//     }

//     cout<<fac;
    
// }



// int main(){

// cout<<"enter n: ";
// int n;
// cin>>n;

// cout<<factorial(n);
// cout<<endl;
// fact(n);
// cout<<endl;
// factor(n);

// return 0;
// }
