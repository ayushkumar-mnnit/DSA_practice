

#include<iostream>
using namespace std;

int main(){

int ar[4][3];       // creation 
 
cout<<"Enter the nos. : ";


for(int i=0;i<4;i++){           // input -> this is row-wise. here i stands for row and j column for row
    for(int j=0;j<3;j++){
        cin>>ar[i][j];         // 1st box-> for row, 2nd box -> for column , always
    }
}

cout<<"\n";

for(int i=0;i<4;i++){          // output 
    for(int j=0;j<3;j++){
        cout<<ar[i][j]<<" ";
    }
    cout<<"\n";
}

 
cout<<"Enter the nos. : ";

for(int i=0;i<3;i++){           // input -> column-wise. basically this time i stands for column and j stands for row
    for(int j=0;j<4;j++){
        cin>>ar[j][i];            // 2nd box is for column so here also make swap i,j from previous row-wise input
    }
}


cout<<"\n";

for(int i=0;i<4;i++){          // output 
    for(int j=0;j<3;j++){
        cout<<ar[i][j]<<" ";
    }
    cout<<"\n";
}

// intialisation:

int arr[3][2]={1,3,5,6,8,4};   

cout<<"\n";

for(int i=0;i<3;i++){          // output : by default intialisation returns o/p  row-wise
    for(int j=0;j<2;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
return 0;
}

