#include<iostream>
using namespace std;

const int SIZE = 4;
int queue[SIZE];
int front = -1;
int rear = -1;

bool isempty(){
    return front=rear==-1;
}
bool isfull(){
    return rear==SIZE-1;
}

void enqueue(int x){
    if(isfull()){
        cout<<"queue is OVERFLOW"<<endl;
        return;
    }
    else{
        front=0;
    }
    rear++;
    queue[rear]=x;
    }

void dequeue(){
    if(isempty()){
        cout<<"Queue is UNDERFLOW"<<endl;
        return;
    }
    int ele = queue[front];
    if(front==rear){
        front=rear=-1;
    }
    else{
        front++;
    }
    return ;
}

void display(){
    if(isempty()){
        cout<<"Queue is empty nothing to display"<<endl;
        return;
    }
    cout<<"queue:";
    for(int i=0;i<=rear-1;i++){
        cout<<queue[i]<<" ";
    }
}

int main(){
    enqueue(1);
    enqueue(4);
    enqueue(5);
    enqueue(7);
    enqueue(2);
    dequeue();
    dequeue();
    display();
    return 0;
    
}
