
/* Key point: put the smallest element of unsorted array at 1st position

compare 1st element with each element of unsorted array and swap if any element greater than this is found.
now 1st element is sorted and repeat the procedure for remaining unsorted array.

so in each comparision: go upto < size-1

it takes 'n' comparisions for sorting a 'n' sized array.

*/


#include<iostream>
using namespace std;

void selsort(int  arr[],int size){

    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}

void display(int arr[],int size){
    cout<<"Sorted array is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){

int n;
cout<<"size: ";
cin>>n;
int ar[n];
cout<<"Elements: ";
for(int i=0;i<n;i++){
    cin>>ar[i];
}

selsort(ar,n);
display(ar,n);

return 0;
}