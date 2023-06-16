
// HASHING : is a technique used in finding the occurrence of number or any character in a much efficient way than other conventional ways.All the operations in hashing are completed in O(1) time.


/* Hashing in integer array: Number hashing 

consider array , int ar[8]={1,4,2,1,3,2,4,5} and we have 2 find the occurenece of each element.

coneventional method --> make a counter variable and iterate through the whole array using loop---> O(n) time will take place for a size of n and 1 element occurence. But consider all 'n' such elements' occurence is to be found then n*O(n) time will take place---> very ineffective way.


hence we use hashing ......

create a hash array intitalised with zero and size--> maximum element present+1

int hash[9]={0} , now indices of this array can be mapped to elements of ar[].
iterate through ar[] and as increment the element by one in each iteration in hash array when element of ar[] matches with index of hash array.

ex. consider iteration no.1 ~

ar[0]=1 then element corresponding to index '1' in hash array gets updated to 1 from 0,

ex. iteration no.4 ~

ar[3]=1 again element corresponding to index '1' in hash array gets updated to 2 from 1


so this way in one go all the element occurences are stored in hash array.


*/


// CODE implementation:

#include<iostream>
using namespace std;

int main(){

int ar[8]={1,4,2,1,3};
int hash[9]={0};

for(int i=0;i<5;i++)
{
    hash[ar[i]]+=1;
}


// printing the occurences:

cout<<"enter the numbers whose occurences is to be found: ";
int num;

for(int i=0;i<6;i++)
{
    cin>>num;
    cout<<"occurrence of "<<num<<" is "<<hash[num]<<endl;
}


return 0;
}


/* you can't declare array of any size: 

integer array- max size is 10^6 (inside int main() i.e. locally) and 10^7 outside int main() i.e. globally
boolean array- max size is 10^7 (inside int main() i.e. locally) and 10^8 outside int main() i.e. globally

so we can't use number hashing for array of size > 10^6 inside main() and > 10^7 outside main()

*/


// character hashing :

/*

similar but only difficulty is that here we can't use index mappping of hash array with characters directly. becoz we may say that ok map 'a'--0 , 'b'--1 and so on but how do we implement this ? 
one way is using map and creating custom key value pairs {a,0} , {b,1} , {c,2} then use hashing

another simple method is using help of ASCII (American standard for information interchange) codes of characters

ASCII for lower case letters : 'a' ---> 97 and 'z' ---> 122
ASCII for upper case letters : 'A' ---> 65 and 'Z' ---> 87

consider lowercase lettes only then,

'a'-'a'=0
'b'-'a'=1
'c'-'a'=2
.
.
.
'z'-'a'=25

so we found formula for index mapping in hash array and i.e. 'ch'-'a' (here we are able to subtract two characters becoz when we do arithmetic operation on it then their ASCII codes are considered internally for this purpose)

*/


// code implementation:

#include<iostream>
using namespace std;

int main(){

string s;
cout<<"enter string: ";
cin>>s;
cout<<endl;
int hash[26]={0}; // becoz 26 alphabets are there 

for(int i=0;i<s.length();i++)
{
    hash[s[i]-'a']+=1;
}

int q;  // 'q' is number of queries i.e. no of characters whose occurence is to be found out. 
cout<<endl;
cout<<"enter the query size: ";
cin>>q;
cout<<endl;
cout<<"enter the charcacters whose occurence is to be found : " ;
while(q--)  // means until q is not equal to zero
{
    char ch;
    cin>>ch;

    cout<<"occurence of "<<ch<<" "<<hash[ch-'a']<<endl;
}



return 0;
}


/* if upper case letters come then just use index no.= s[i]-'A'
there may be atmost 256 characters associated with ASCII codes hence there is no such problem of array size in hashing as problem arose while we were discussing about number hashing.
*/


// The problem of exceeded size in number hashing can be solved by using 'map' of STL:

/*

let int ar[5]={3,1,2,1,3};

we define map<int,int> m;   This map contains key-value pairs in which key-ar[i] and value is occurence or frequency of ar[i].

so suppose for first element we write m[3] then it will return 0 becoz we have just declared map 'm' but not initialsed it so no key-value pairs exits hence value corresponding to key '3' is 0.

but we want m[3]--> 1 so we do m[3]++ so that now m[3]++ ---> 1 and when iteration keeps on and another 3 comes then m[3]++ --> 2 becoz map stores unique keys so when same key 3 is passed then instead of creatings new one , it just updates previous one.


so in short we are doing m[ar[i]]++ in each iteration.


*/


// code implementation : 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

int ar[5]={3,1,2,1,3};

map<int,int> m;

for(int i=0;i<5;i++)
{
    m[ar[i]]++;
}

cout<<"enter the query size: ";
int q;
cin>>q;
cout<<endl;
cout<<"enter the elements whose occurence is to be searched: ";
int num;
while(q--)
{
    cin>>num;
    cout<<"occurence of "<<num<<" is "<<m[num]<<endl;
}

return 0;
}


/* If we use an unordered map then it also works the same way as a map do the only difference is that map - does in sorted manner while an unordered map does the same in unsorted manner. further map takes O(logn) time for all operation in every case but unordered map takes O(1) time in best and average case but O(n) time in worst case (happens rarely)

so always prefer unordered map as first preference but if TLE comes (which in case of worst case - very rare) then , use map

*/

// In the same way map can be used in chracter hashing:

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

string s="asyuhsu";

map<char,int> mp;

for(int i=0;i<s.length();i++)
{
    mp[s[i]]++;
}

cout<<"enter the query size: ";
int qr;
cin>>qr;
cout<<endl;
cout<<"enter the elements whose occurence is to be searched: ";
char ch;
while(qr--)
{
    cin>>ch;
    cout<<"occurence of "<<ch<<" is "<<mp[ch]<<endl;
}

return 0;
}