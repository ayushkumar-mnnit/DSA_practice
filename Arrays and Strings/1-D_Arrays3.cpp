
// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// vector<int> Union(vector<int> a, vector<int> b)
// {
//     set <int> st;
//     int n1=a.size();
//     int n2=b.size();
//     for(int i=0;i<n1;i++)
//     {
//         st.insert(a[i]);
//     }


//     for(int i=0;i<n2;i++)
//     {
//         st.insert(b[i]);
//     }

//    vector <int> unionarr;

//    for(auto iter: st)
//    {
//     unionarr.push_back(iter);
//    }

//    return unionarr;
// }

// int main(){

// vector<int> a={1,3,5,7,9,9};
// vector<int> b={3,5,5,6,6};


// cout<<Union(a,b);


// return 0;
// }


// merge sorted arrays:

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int ar1[],int n1,int ar2[],int n2)
{   int i,j,k;
    i=j=k=0;
    int ar3[n1+n2]={};
    while(i<n1 && j<n2)
    {
        if(ar1[i]<ar2[j])
        { 
            ar3[k++]=ar1[i++];
            
        }



        else if(ar2[j]<ar1[i])
        {
             ar3[k++]=ar2[j++];
        }
    }

cout<<"i="<<i<<endl;  // this is just for justifying that i and j are updated globally so for copying remaining 
cout<<"j="<<j<<endl;  // elements i and j don't start from 0 anymore (which is desired).

    while (i<n1)
    {
        ar3[k++]=ar1[i++];  // copy remaining elements of 1st array,if any
    }

    while (j<n2)
    {
        ar3[k++]=ar2[j++];   // copy remaining elements of 2nd array,if any
    }
    int s=0;
    while (s<(n1+n2))
    {
        cout<<ar3[s]<<" ";
        s++;
    }
    

}


int main(){

int ar1[]={1,3,5,7,9,11,13};
int ar2[]={2,10,17};

merge(ar1,7,ar2,3);


return 0;
}

