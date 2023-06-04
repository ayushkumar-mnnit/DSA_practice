

// // basic of selection sort is to put the smallest element (from the unsorted array) on the left most side.

// #include<iostream>
// using namespace std;

// //  function for selection sort:

// void selsort(int arr[],int size){

//     for(int i=0;i<size;i++){

//         for(int j=i+1;j<size-1;j++){
//             if(arr[j]<arr[i]){
//                 swap(arr[j],arr[i]);
//             }
//         }

//     }

// }

// int main(){

// int n;
// cout<<"Enter the size: ";
// cin>>n;
// int ar[n];
// cout<<"Enter the elements: ";
// for(int m=0;m<n;m++){
//     cin>>ar[m];
// }
// selsort(ar,8);
// cout<<"Sorted array is: ";
// int k=0;
// while(k<n){
//     cout<<ar[k]<<" ";
//     k++;
// }

// return 0;
// }

// bubble sort keypoint is: repeatedly swap the elements if they are int the wrong order from the unsorted array :

#include <iostream>
using namespace std;

void bubsort(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i + 1; j < size - count; j++)
        {

            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
            }
            count++;
        }
    }
}

int main()
{

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    bubsort(ar, n);
    int i = 0;
    while (i < n)
    {
        cout << ar[i] << " ";
        i++;
    }

    return 0;
}