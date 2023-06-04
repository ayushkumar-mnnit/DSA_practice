
// unique element: each element occurs multiple times except one ,find that element

// #include<iostream>
// using namespace std;

// int unique(int ar[],int n)
// {       
//     int ans=0;

//     for(int i=0;i<n;i++)
//     {

//         ans=ans^ar[i];  // becoz 1^1=0 , 1^0=1, 0^0=0 : Basically XOR of same elements=0 and XOR of element with 0 = same element
//     }
   

//     return ans;

// }

// int main(){

// int arr[]={2,2,3,3,5,5,4,4,7,8,8};

// cout<<unique(arr,11);
// return 0;
// }

// duplicate element: each occurs once except one, find it


#include<iostream>
using namespace std;

int dup(int ar[],int n)
{       
    int ans=0;

    for(int i=0;i<n;i++)
    {

        ans=ans^ar[i];  
    }

    for(int i=1;i<n;i++)
    {

        ans=ans^i;  
    }
   
   if(ans==0)
   {
    return -1;
   }

    return ans;

    

}

int main(){

int arr[]={1,2,2,3,4,4,5};

cout<<dup(arr,7);
return 0;
}
