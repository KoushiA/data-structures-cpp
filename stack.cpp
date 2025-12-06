#include <iostream>
using namespace std;

int top=-1;
int n, val;
int stack[40];
void push(){
    if (top>n){
        cout<<"OVERFLOW CONDITION!"<<endl;
    }
    else{
        top++;
        stack[top]=val;
    }
}
void pop(){
    if (top==-1){
        cout<<"UNDERFLOW CONDITON!"<<endl;
    }
    else{
    int data=stack[top];
    cout<<"Popped element is: "<<data<<endl;
        top=top-1;
    }
}
void peek(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Topmost element of stack is: "<<stack[top]<<endl;
    }
}
int main(){
    cout<<"Enter number of elements in stack: ";
    cin>>n;
    cout<<"Enter data"<<endl;
    for(int i=0;i<n;++i){
        cin>>val;
        push();
    }
    peek();
    pop();
    peek();
}