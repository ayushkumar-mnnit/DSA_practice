/*  C++ STL (standard template library) : 

(1) Algorithms : Binary search, lower/upper bound, min/max, reverse/rotate, sort/swap .

(2) Containers : array, vector, deque, list, forward list, stack, queue, priority queue, set, map, mult-iset, multi-map, unordered set, unordered map, unordered multi-set, unordered multi-map .


*/ 


// Containers: 

#include<iostream>
#include<array>  // library included for STL array 
using namespace std;

int main(){

array<int,5> a={2,4,6,1,7}; /* STL array. Implementated through fixed size static array so its also static (like coventional array)
here fixed size array is a[]={2,4,6,1,7} */ 
cout<<"Total memory occupied by array:"<<sizeof(a)<<endl;
cout<<"Size of array:"<<a.size()<<endl;
cout<<"first element:"<<a.front()<<endl;
cout<<"last element:"<<a.back()<<endl;
cout<<"Is empty ? :"<<a.empty()<<endl;
cout<<"Element at index 3 : "<<a.at(3)<<endl; 
cout<<"Element at index 2 : "<<a[2]<<endl;   // using ordinary method
// full STL array can be printed like ordinary array:
cout<<"Array is: ";
for(int i=0;i<a.size();i++)
{
    cout<<a[i]<<" ";
}

return 0;
}