
/* Queue is a linear data type in which elements follow the FIFO Order i.e. first in first out

elements are always popped from 'front' and pushed at 'rear' 

*/

#include<iostream>
#include<queue>
using namespace std;

int main(){

// creation of queue of 'int' type and performing basic opertaion using the STL :

queue<int> q;
// inserting i.e. pushing of the elements in queue:
q.push(3);
q.push(6);
q.push(0);
q.push(-2);
cout<<"size of the queue: "<<q.size()<<endl; // here size means no.of elements not the memory in bytes
cout<<"front is: "<<q.front()<<endl;

q.pop(); // first element is deleted 

// new size and front are: 
cout<<"updated size of the queue: "<<q.size()<<endl;
cout<<"updated front is: "<<q.front()<<endl;

// check whether queue is empty or not:

if(q.empty()){
    cout<<"queue is empty";  /* q.empty() return bool value 1 or 0 so any non zero value inside 'if' will execute 'if'*/
}
else{
    cout<<"queue is not empty";
}

return 0;
}