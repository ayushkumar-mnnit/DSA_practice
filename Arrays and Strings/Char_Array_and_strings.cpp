
// // In C and C++ character array is equivalent to a string

// #include<iostream>
// using namespace std;


// int main(){

// // char name1[]={'a','y','u','s','h'};  // doubt ??
// // cout<<name1;  

// char name[20];
// cout<<"Enter your name: ";
// cin>>name;  /* input characters go in block by block starting from index 0 to 1 less than null character i.e. \0  
// non-character array's input can't be taken like this, we need loops for them. */

// cout<<"Name is: "<<name;  /* output is also done in the same manner ,each character from indices 0 to \0-1  and this way output
// for non-character array is not possible, we need loop for that. */

// /* 1. Note that execution of input stops when it encounters \0 for the first time and also in case of \n,\t,enter,space,tab etc.
// 2. \0 (null character) is the termination point of a string or character array.*/

// cout<<"\n"<<sizeof(name); // size means total no bytes of memory allocated to array
// cout<<"\n"<<name[5];
// // finding the length of array : length means number of elements in array

// int count=0;
// while(name[count]!='\0')
// {  
//     count++;
// }
// cout<<"\nlength of array is: "<<count;

// // reversing the array :

// int n=count;  // we found the length above
// int s=0;
// int e=n-1;

// while (s<e)
// {
//     swap(name[s],name[e]);
//     s++;
//     e--;
// }

// cout<<"\nReversed array is: "<<name;


// return 0;
// }

// /* other arrays don't have null characters so we can't find length directly if arrray is partially filled.
// for fully filled length=sizeof(array)/sizeof(data type)  */

// #include<iostream>
// using namespace std;

// int main(){
// int arr[]={2,5,1,5,3};
// cout<<sizeof(arr);
// char name[6]={'a','y','u','s','h'};
// cout<<endl<<sizeof(name);
// cout<<name;
// return 0;
// }

// palindrome:



// #include<iostream>
// using namespace std;

// int check_palindrome(char arr[],int n){
//     int s=0;
//     int e=n-1;
// while(s<e){

//     if(arr[s]!=arr[e]){
//         return 0;
        
//     }

//     else {
//         s++;
//         e--;
//     }

// }

// return 1;

// }

// int main(){

// char name1[10]={'n','o','o','n'};
// char name2[10]={'n','o','o','n','n'};

// cout<<check_palindrome(name1,4);
// cout<<endl;
// cout<<check_palindrome(name2,5);


// return 0;
// }


#include<iostream>
using namespace std;

int main(){

string name="Ayush";
cout<<name;
name.pop_back();
cout<<"\n";
cout<<name;
name.push_back('h');
cout<<endl;
cout<<name;


return 0;
}