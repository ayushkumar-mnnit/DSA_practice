

// linera search:

// #include<iostream>
// using namespace std;

// bool linearsearch(int ar[],int n,int k)
// {
// // this shows how function calling is happening:

//       cout<<"size: "<<(n)<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<ar[i]<<" ";
//     }

//     cout<<endl;


//     // base:

//     if(n==0)return 0;

//     if(ar[0]==k) return 1; // basically in every funcn call, first element will be compared with the key
//     // if matches return 1 else , call the function again with next element and now size = size-1 , obviously.

//     // recursive relation:
//     else
//     {

//     linearsearch(ar+1,n-1,k);

  

//     }




// }

// int main(){

// int ar[]={12,3,2,7,5};

// if(linearsearch(ar,5,7))
// {
//     cout<<"found";
// }

// else{
//     cout<<"not found";
// }

// return 0;
// }



// binary search:

// #include<iostream>
// using namespace std;

// int binarysearch(int ar[],int s,int e,int k)
// {
//     // base:
// int mid=s+(e-s)/2;

//     if(ar[mid]==k) 
//     {
//         return mid;
//     }
//     if(s>e) 
//     {
//         return 0;
//     }

//     if(k>ar[mid])
//     {
//         binarysearch(ar,mid+1,e,k);
//     }
//    else if(k<ar[mid])
//     {
//        return binarysearch(ar,s,mid-1,k);
       
//     }



// }

// int main(){

// int ar[]={1,2,3,45,67};
// if(binarysearch(ar,0,4,45))
// {
//     cout<<"Index of key is: "<<binarysearch(ar,0,4,45);
// }

// else
// {
//     cout<<"Key not found";
// }

// return 0;
// }



//  reverse an array:


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int s,int e)
{
    // base:

    if(s==e)
    {
    return ;
    }

    else
    {   swap(arr[s],arr[e]);
       reverse(arr,s+1,e-1); 
    }
    
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){

int ar[]={1,2,3,4,5};

reverse(ar,0,4);

print(ar,5);

return 0;
}

