
// swap alternate:

#include<iostream>
using namespace std;



void swap_alternate(int arr[],int size){
    for(int i=0;i<size;i=i+2){

        if(i+1<size){
        swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int n;
cout<<"Enter the size: ";
cin>>n;
int ar[n];
cout<<"Enter the array elements: ";
for(int x=0;x<n;x++){
    cin>>ar[x];
}

swap_alternate(ar,n);

for(int x=0;x<n;x++){
    cout<<ar[x]<<" ";
}

return 0;
}



// even numbers counter:

#include<iostream>
using namespace std;



void even(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    cout<<"Number of even numbers in the array are: "<<count<<endl;
}
int main(){

int n;
cout<<"Enter the size: ";
cin>>n;
int ar[n];
cout<<"Enter the elements : ";
for(int x=0;x<n;x++){
    cin>>ar[x];
}

even(ar,n);

char name[6]={'A','y','u','s','h'};
cout<<name<<endl;
cout<<sizeof(name);

return 0;
}



// max , min integer:


#include<iostream>
using namespace std;

int main(){

int arr[5]={2,4,8,5,1};

int max=INT32_MIN;

for(int i=0;i<5;i++){
    if(arr[i]>max){
        max=arr[i];
    }
    

}
cout<<max<<endl;

int min=INT32_MAX;

for(int i=0;i<5;i++){
    
if(arr[i]<min){
        min=arr[i];
    }

}
cout<<min<<endl;

return 0;
}


// reverse an array:


#include<iostream>

using namespace std;

// method-1:

void reverse(int ar[],int n){
    for(int i=n-1;i>=0;i--){
        cout<<ar[i]<<" ";
    }
    cout<<"\n";
}

// method-2:

void reverse_array(int arr[],int size){

     int i;
    while(i<size){

    int start=0;
    int end=4;
 
        while(start<=end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;

        }

        i++;

    }

    for(int x=0;x<size;x++){

cout<<arr[x]<<" ";

}



}


int main(){

int ar[]={3,1,6,5,2};
reverse(ar,5);
reverse_array(ar,5);



return 0;
}



