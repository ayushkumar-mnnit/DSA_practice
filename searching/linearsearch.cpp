
#include<iostream>
using namespace std;

// linear search function :

int linsearch(int ar[],int size,int key){
for(int i=0;i<size;i++){
    if(ar[i]==key){
        return i;
    }
}
return -1;
}

int main(){

int n,x;
cout<<"Enter the size: ";
cin>>n;
cout<<"Enter the key: ";
cin>>x;
int arr[n];
cout<<"Enter the elements: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

// function calling:

int index=linsearch(arr,n,x);
cout<<"Key is presnet at index: "<<index<<endl;

return 0;
}