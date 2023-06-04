
#include<iostream>
#include<vector>   // for vector
#include<iterator> // for iterators
using namespace std;

int main(){

/* vector: dynamic array, doubles its size as per requirement->copies elements from old array to
this new array of double size and dumps off the old array. */

vector<int> v; // intialisation without intial size--> default size=capacity=0
// intially:
cout<<"Capacity: "<<v.capacity()<<endl;  // max no. of elements that can be accomodated i.e. total memory blocks
cout<<"Size: "<<v.size()<<endl;  // no of elements present i.e. blocks with elements

//after pushing element:
v.push_back(2);  // element push operation
cout<<"Capacity: "<<v.capacity()<<endl;
cout<<"size: "<<v.size()<<endl;
v.push_back(1);
cout<<"Capacity: "<<v.capacity()<<endl;
cout<<"size: "<<v.size()<<endl;
v.push_back(7);
cout<<"Capacity: "<<v.capacity()<<endl;
cout<<"size: "<<v.size()<<endl;
v.push_back(4);
cout<<"Capacity: "<<v.capacity()<<endl;
cout<<"size: "<<v.size()<<endl;
v.push_back(11);
cout<<"Capacity: "<<v.capacity()<<endl;
cout<<"size: "<<v.size()<<endl;
v.pop_back(); // element pop operation
cout<<"Capacity: "<<v.capacity()<<endl;
cout<<"size: "<<v.size()<<endl;

// printing the elements:


for(int i:v){
    cout<<i<<" ";
}

cout<<"\nfirst element:"<<v.front()<<endl;
cout<<"last element:"<<v.back()<<endl;
cout<<"Is empty ? :"<<v.empty()<<endl;
cout<<"Element at index 3 : "<<v.at(3)<<endl; 
cout<<"Element at index 2 : "<<v[2]<<endl; 

// clearing deletes elements so size becomes 0 not capacity:

v.clear();
cout<<"Capacity: "<<v.capacity()<<endl;
cout<<"size: "<<v.size()<<endl;

// another way of initialsation : with size
vector<int> a(5);  // size intialised as 5 but default initial value in each=0 because value not initialised.
for(int i:a){
    cout<<i<<" ";
}
cout<<endl;

vector<int> b(5,2);  //  size intialised as 5 but default initial value in each=2 because value initialised as 2.
for(int i:b){
    cout<<i<<" ";
}


// copying one vector elements to other vector:

vector<int> x(4,6);
vector<int> y(x);  // all four 6's will be copied from x to y vector. 

cout<<endl;

for(int i:x){
    cout<<i<<" ";
}

cout<<endl;

for(int i:y){
    cout<<i<<" ";
}

// C++ code to demonstrate the working of
// iterator, begin() and end()


	vector<int> ar = { 1, 2, 3, 4, 5 };
	
	// Declaring iterator to a vector
	vector<int>::iterator ptr;
	
	// Displaying vector elements using begin() and end()
	cout << "The vector elements are : ";
	for (ptr = ar.begin(); ptr < ar.end(); ptr++)
		cout << *ptr << " ";


return 0;
}