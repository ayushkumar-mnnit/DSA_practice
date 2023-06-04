
// Queues can be implemented from scratch using the arrays and linked lists :

// Implementation using array: 


#include<iostream>
using namespace std;

int size;
int front=-1;
int rear=-1;

void enqueue(int q[],int size){

    if(rear==size-1){
        cout<<"\nQueue is full !!"<<endl;
    }
    else{
        
    cout<<"\nEnter the elements : ";
    int i=0;
    while(i<size){

    cin>>q[i];

    rear++;
    i++;
    }
    front++;
    }
}

void display(int q[],int size){
    
    if(front==rear){
        cout<<"Empty";
    }
    else{
    cout<<"\nQueue is : ";

for(int i=0;i<size;i++){
cout<<q[i]<<" ";
}
    }

cout<<"\nfront is : "<<front<<endl;
cout<<"rear is : "<<rear<<endl;

}

void dequeue(int q[],int size){

    if(front==rear){
        cout<<"\nQueue is empty";
    }

    else{

        while(front!=rear){
            front++;
        }

    }
}
int main(){

int n;
cout<<"\nEnter the size : ";
cin>>n;
int queue[n];

enqueue(queue,n);
display(queue,n);
dequeue(queue,n);
display(queue,n);
cout<<sizeof(queue);

return 0;
}