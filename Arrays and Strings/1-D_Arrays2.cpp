

// rotate an array:

#include<iostream>
using namespace std;

void rotate(int arr[],int n, int k)
{   
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++)
    {
        temp[i]=arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        arr[i-k]=arr[i];
    }

    


    for(int i=n-k;i<n;i++)
    {   
        arr[i]=temp[i-(n-k)];
    
    }

   
}

int main(){

int n;
cout<<"enter n: ";
cin>>n;

int ar[n];
cout<<"enter elements: ";
for(int i=0;i<n;i++)
{
    cin>>ar[i];
}

int k;
cout<<"enter k: ";
cin>>k;


cout<<endl;

rotate(ar,n,k);

 for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
return 0;
}


//rotate array- optimised:

#include<iostream>
using namespace std;

void rv(int ar[],int n)
{   int s=0;
    int e=n-1;
    while(s<=e)
    {
        swap(ar[s],ar[e]);
        s++;
        e--;
    }

}

void rot(int ar[],int n,int k)
{
    rv(ar,k); // reverses first k elements
    rv(ar+k,n-k);  // reverses next n-k elements
    rv(ar,n);  // reverses all n elements



}

int main(){


int n;
cout<<"enter n: ";
cin>>n;

int ar[n];
cout<<"enter elements: ";
for(int i=0;i<n;i++)
{
    cin>>ar[i];
}

int k;
cout<<"enter k: ";
cin>>k;


cout<<endl;

rot(ar,n,k);

 for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }

return 0;
}


// move zeros at the end:

#include<iostream>
using namespace std;

// Brute-force approch

void movez(int ar[], int n)
{   int temp[n]={};
       
    for(int i=0;i<n;i++)
    {
        if(ar[i]!=0)
        {
            temp[i]=ar[i];  // added all non-zero elements in temp array
        }
    }

    int s=sizeof(temp)/4;
    

    for(int i=0;i<s;i++)
    {
        ar[i]=temp[i];      //updated and  placed all non-zero numbers at the start
    }


    for(int i=s;i<n;i++)
    {                             // set remaining elements equal to zero.
        ar[i]=0;
    }


}

// optimised-

void zerosend(int ar[],int n)
{   int j=-1;

    for(int i=0;i<n;i++)
    {
        if(ar[i]==0)
        {
            j=i;
            break;
        }
    }
    
    if(j==-1)
    {
for(int i=0;i<n;i++)
{
    cout<<ar[i]<<" ";
}

    }

    else{

    for(int i=j+1;i<n;i++)
    {
        if(ar[i]!=0)
        {
            swap(ar[i],ar[j]);
             j++;
        }
       
    }

    for(int i=0;i<n;i++)
{
    cout<<ar[i]<<" ";
}

        }



}

int main(){

int ar[]={1,2,0,0,4,3,6,0,5,0};

movez(ar,10);
cout<<endl;
zerosend(ar,10);


return 0;
}

