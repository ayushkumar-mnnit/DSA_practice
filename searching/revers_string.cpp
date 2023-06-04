

// method 1: using string indexing:

#include<iostream>
using namespace std;

void reverse(string str,int size){
    for(int i=size-1;i>=0;i--){
    cout<<str[i];
    }

}

int main(){
cout<<"give the size of the string : "<<endl;
int size;
cin>>size;
cout<<"give the input string : "<<endl;

string x;
cin>>x;

cout<<"Reversed string is : ";

reverse(x,size);
cout<<"\n";
cout<<x;
return 0;
}

//method 2: using binary search  

#include<iostream>
#include<string>
using namespace std;

void reverse(string &str){
    int n = str.size();
    int s=0;
    int e=n-1;

    while(s<e){
        swap(str[s++],str[e--]);
    }
    cout<<str<<endl;
}
int main(){
string s;
cin>>s;
reverse(s);
cout<<"\n";
cout<<s;   // in this method string is permanently reversed .
return 0;
}

// method 3: using array


#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the size : ";
cin>>n;
char arr[n];

cout<<"Enter the elements : "<<endl;
for(int i=0;i<n;i++){
cin>>arr[i];
}

cout<<"Character array or string is : "<<endl;
for(int i=0;i<n;i++){
cout<<arr[i];
}

cout<<"Reverse string is :"<<endl;
for(int j=4;j>=0;j--){
    cout<<arr[j];
}

return 0;
}