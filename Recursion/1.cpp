

// factorial:

#include<iostream>
#include<math.h>
using namespace std;

int fact(int n)
{
    // base :

    if(n==0)return 1;

    // recursive relation :

    // int smallproblem=fact(n-1);
    // int bigproblem=n*fact(n-1);

    int ans =n*fact(n-1);
   
    return (ans);
}

int main(){

int n;
cout<<"Enter the value of n : ";
cin>>n;

cout<<fact(n)<<endl;

return 0;
}



// counting: 

   #include<iostream>
   using namespace std;
   
   void count(int n)
   {
    //base:

    if(n==0)
    {
        return;  // use 'return' only with void recursive functions becoz return condn is must in base
    }

    count(n-1);
    cout<<n<<endl;
    // recursive relation:



   }
   int main(){
   
   int n=5;
   count(n);
   return 0;
   }



// sum of first n natural numbers:

#include<iostream>
using namespace std;

int nsum(int n)
{   

    //base:
    if(n==0) return 0;
    else if(n<0)
    {
        return -1;
    }
    else
    {
        return n+nsum(n-1);
    }
}

int main(){
cout<<"enter n: ";
int n;
cin>>n;

if(nsum(n)==-1)
{
    cout<<"Invalid number !!"<<endl;
}
else
{

cout<<nsum(n);

}

return 0;
}
