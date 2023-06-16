
// PAIRS:

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

pair<int,int> p={2,7};   // simple pair

pair<int,pair<int,int>> q={2,{3,5}};  // nested pair --- "anyone" data type can be pair itself ,not both

pair<int,int> ar[]={{2,5},{7,8}}; // nested pair --- array elements as pairs

cout<<p.first<<endl;
cout<<q.second.first<<endl;
cout<<ar[0].second<<endl;

return 0;
}


// VECTORS: Dynamic array  (managed by singly linked list)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int> v;  // declaration of vector creates an empty vector {}

/* push_back(5)---> adds 5 element at the back. same operation can be done by emplace-back() at a faster rate. 

we have pop_back() option which deletes element from back


size- no.of  elements in vector
capacity- max. no. of elements that can be present in vector

*/


v.push_back(2);
cout<<"size= "<<v.size()<<" and capacity= "<<v.capacity()<<endl;
v.push_back(4);
cout<<"size= "<<v.size()<<" and capacity= "<<v.capacity()<<endl;
v.push_back(12);

// when vector is full upto its capacity and we further push an element to it then vector dynamically doubles its size and copies all the elements into a new vector and dumps off old vector. 

cout<<"size= "<<v.size()<<" and capacity= "<<v.capacity()<<endl; 

vector<pair<int,int>> p;  // passing pair into a vector
p.push_back({2,4});

// initialsing vector --storing all the elements in vector at the time of declaration of vector

vector<int> vec={2,4,8,9,1}; // creates a vector of size 5 with indicated values
vector<int> a(5,3);  // creates a vector of size 5 and initial value 3 for all elements.
vector<int> b(5);  // creates a vector of size 5  and assigns some garbage value or 0 to all elements (depends on compiler).

vector<int> c(a); // copies vector "a" to a new vector "c"

/* printing vector elements:

1. using iterator~ 

vector<int>::iterator i=vec.begin(); // syntax for iterator -- can be reduced using "auto" keyword
cout<<*(i)<<" ";

auto i=vec.begin();

auto keyword automatically assigns the data type depending upon the vale assigned to variable associated with it. ex. if auto x=4 then x will be of int type becoz 4 is an integer which is stored in x so auto takes care of this. Like here ,when i=vec.begin() then "auto", considers i as iterator automatically, no need to specify. 

2. without iterator~ h

cout<<vec[0]<<" "; 
or
cout<<vec.at(2);

Now either of the 2 methods can be implemented using loops to traverse an entire vector.


*/

// ex. using for loop with iterator:

for(auto i=vec.begin();i!=vec.end();i++)
{
    cout<<*(i)<<" ";
}

cout<<endl;
// ex.using for loop without iterator:

for(int x=0;x<vec.size();x++)
{
    cout<<vec[x]<<" ";
}

cout<<endl;

// using for each loop:

for(auto p:vec)
{
    cout<<p<<" ";
}

cout<<endl;

// deletion in vector:

vector<int> s={12,43,123,13,5};

// s.erase(s.begin()); // erases the element whose iterator is passed

// s.erase(s.begin()+1,s.begin()+3); // deletes elements in range [ s.begin()+1,s.begin()+3 ) 

s.erase(s.begin(),s.end()); // deletes entire vector

// s.clear() ----> clears entire vector in one go. 

for(auto m:s)
{
    cout<<m<<" ";

}

 if(s.empty())   // checks for empty vector or not
    {
        cout<<"All clear";
    }

cout<<endl;

// Insert function in vector:

vector<int> v1={2,42,6};
for(auto k:v1)
{
    cout<<k<<" ";
}

cout<<endl;

v1.insert(v1.begin(),23); // inserts 23 at first position
for(auto k:v1)
{
    cout<<k<<" ";
}

cout<<endl;

v1.insert(v1.begin()+1,2,4); // inserts two 4's at position v.begin()+1 and v.begin()+2


for(auto k:v1)
{
    cout<<k<<" ";
}


//  v2.swap(v3)  ---->  swaps vectors v2 and v3 

return 0;
}




// LISTS : managed by doubly linked list


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

list<int> ls;

/*

ls.push_front(5);
ls.emplace_front(5);
ls.pop_front();
ls.front();
ls.back();

rest all same as vectors. 

insertion operation using push_front operation of list is much efficient than insert operation of vector becoz internally list is managed by doubly linked list while vector is managed by singly linked list.

*/

return 0;
}



// DEQUE : managed by dynamic array of pointers. (just like vector is dynamic array of elements)


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

deque<int> d;

/*
d.push_front(5);
d.emplace_front(5);
d.pop_front();
d.front();
d.back();

rest all same as vectors. 


if you see carefully then deque and list are almost same but , major difference is that :

deque-A standard container using fixed-size memory allocation and constant-time manipulation of elements at either end and linear time manipulation of midlle elements.
list-A standard container with linear time access to elements, and fixed time insertion/deletion (manipulation) at any point in the sequence.


*/


return 0;
}




// STACK: 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

// works on LIFO - last in first out principle i.e the element which is pushed first is popped last. Good thing about stack is that all the operations occur in constant time.

stack<int> s;

/*

s.push(3);
s.emplace(5);
s.pop();
s.top();
s.size();
s.empty();

stack<int> s1,s2;
s1.swap(s2);


*/
return 0;
}




//QUEUE :


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

// works on FIFO - first in first out principle i.e the element which is pushed first is popped first. Good thing about queue is that all the operations occur in constant time.

queue<int> q;

/*

q.push(3);
q.emplace(5);
q.pop();
q.front();
q.back();
q.size();
q.empty();

queue<int> q1,q2;
q1.swap(s2);


*/
return 0;

}



// PRIORITY QUEUE : maintained by tree DS internally



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){


priority_queue<int> pq;

/*

pq.push(3);
pq.emplace(5);
pq.pop();
pq.top();
pq.back();
pq.size();
pq.empty();


It is a type of queue but actually it looks works stack and all its functions are also same as stack, the only difference is that in this , elements are arranged from top to bottom in descending order. for numbers- magnitude wise numerically dec. order, for alphabets and symbols --- ASCII codes are considered in dec. fashion , for strings---lexicographical order is considered in dec. fashion.

Lexicographical order is nothing but the dictionary order or preferably the order in which words appear in the dictonary. For example, let's take three strings, "short", "shorthand" and "small". In the dictionary, "short" comes before "shorthand" and "shorthand" comes before "small". This is lexicographical order.


swap option is similar

further this priority queue by defualt is known as Max Heap-- stores max element at the top
and a Min heap--- (stores min element at the top) can also be implemented using priority queue as : 

priority_queue<int,vector<int>,greater<int>> pq; 



push,pop operation----> O(logn)
top operation-----> O(1)


*/
return 0;

}



// SET : maintained by tree DS internally.


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){


set<int> s;   // set= sorted + unique

/*
s.insert(3);
s.insert(3);
s.insert(1);
s.insert(2);
s.emplace(-1);

after these many insertions. s={-1,1,2,3}  i.e. unique and sorted (ascending)

insert - can also be used in a vector as well

s.find(2)--- returns the iterator of '2'.
if an element is not present then s.find() returns --- s.end() i.e. an iterator pointing memory address after last element.

s.erase(3);  ----> erases 3 in O(logn)
s.erase(it);  ----> erases element corresponding to iterator 'it' in O(1)

if s={1,2,4,5,6,7} and auto it1=s.find(2) , auto it2=s.find(6)  then
s.erase(it1,it2);  -----> erases  elements corresponding to [it1,it2)

after erase s={1,5,6} 

s.count(3)----> returns 1 if atleast one 3 is present and 0  if no 3 is present. becoz set means unique so if multiple 3s will be there then only it will count as one.

****imp.
lower and upper bound: returns location i.e. iterator 

auto it=s.lower_bound(3);  
auto it=s.upper_bound(5);


all operations occur in O(logn) time in set.

*/


return 0;

}




// MULTI-SET :  a set just obeying sorted nature not unique i.e. repeated elements are allowed


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

multiset<int> ms;

/*
ms.insert(3)
ms.insert(3)
ms.insert(3)
ms.insert(5)
ms.insert(1)

ms={1,3,3,3,5}

ms.erase(3) ----> erases all occurrences of 3
ms.count(3) ----> acutually returns no. of 3's
ms.erase(ms.find(3))  ----> only single 3 is erased
ms.erase(ms.find(3),ms.find(3)+1)  ----> range is erased


rest all same as set

*/

return 0;
}



// USET :   a set just obeying unique nature i.e. unsorted elements are allowed. All opertaions are same except lower bound and upper bound functions do not work. mostly takes O(1) time.


// MAP : stores key-value pairs in sorted order (where keys are unique)


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

map<string,int> m;  // key and value both can be of any data type

/*

pushing ke-values in map:

m["shanaya"]=12413; 
or
m.emplace("kavya",12362);  
or  
m.insert({"kavya",13256});

printing map :

for(auto i:m)
{
    cout<<i.first<<" "<<i.second<<" ";
}


cout<<m["kavya"]----> returns value corresponding to key "kavya"  i.e. 12362

auto i=m.find("kavya")--- returns iterator of key "kavya"
now
cout<<*(i).second  ---- returns 12362  


lower and upper bound functions are valid here also, and rest all functions as above


*/

return 0;
}




// MULTI-MAP AND UNORDERED MAP :

/*

multi-map is same as coventional map , the only difference is that it can store duplicate keys as well in sorted order

unordered is same as coventional map , the only difference is that it stores unique keys in but in unsorted order.

map ---- always O(logn)
multi map---- always O(logn)
unordered map ---- in most cases O(1)  only in worst case i.e. rarest case takes O(n) 


*/

