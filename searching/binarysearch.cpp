
#include<iostream>
using namespace std;

// binarysearch function :

int binsearch(int ar[],int size,int key){

int low=0;
int high=size-1;
int mid=(low+high)/2;


while (low<=high)
{
if(ar[mid]==key){
    return mid;
   
}
else if(ar[mid]>key){
    high=mid-1;
}
else{
    low=mid+1;
}
mid=(low+high)/2;
}
return -1;

}

int main(){
int n,x;

cout<<"Enter the size: "<<endl;
cin>>n;
cout<<"Enter the key: "<<endl;
cin>>x;
int arr[n];
cout<<"Enter the elements: "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
// function calling :

int index=binsearch(arr,n,x);
cout<<"Key is present at index "<<index<<endl;
return 0;
}

// note:

/*max value in int could be 2^31-1 so if both low and high are such big numbers then (low+high) will go out of range
and can't be stored in int so , will get error.

to resolve this just we write mid =low+(high-low)/2 */

