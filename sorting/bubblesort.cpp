

/* Key point: repeatedly swap 2 adjacent elements if they are in wrong order (i.e left>right)

1st iteration: largest element reaches at its correct position i.e. last
2nd iteration: 2nd largest element reaches at its correct position i.e. 2nd last
3rd iteration: 3rd largest element reaches at its correct position i.e. 3rd last  and so on

1st itertion -> comparision till (n-1)th element
2nd itertion -> comparision till (n-2)th element becoz last element is sorted now
3rd itertion -> comparision till (n-3)th element becoz last 2 elements are sorted now
Ith itertion -> comparision till (n-I)th element

we have to perform total (n-1) iterations before we get sorted array.



*/
#include<iostream>
using namespace std;

void bubsort(int arr[],int size){

int counter=1;
for(int i=0;i<size;i++){

    for(int j=0;j<size-counter;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    counter++;
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

bubsort(ar,n);
display(ar,n);

return 0;
}




