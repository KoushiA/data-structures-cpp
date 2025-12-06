#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
node *top=NULL;
void push(){
    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;
    cout<<"Enter data"<<endl;
    node *ptr;
    for(int i=0;i<n;++i){
        ptr=new node;
        if(ptr==NULL){
    cout<<"Overflow Condition!"<<endl;
        }
        else{
            cin>>ptr->data;
            ptr->next=top;
            top=ptr;
        }
    }
}
void peek(){
    cout<<"Topmost element is: "<<top->data<<endl;
}
void pop(){
    if(top==NULL){
        cout<<"Underflow condition!"<<endl;
    }
    else{
     node *ptr;
    ptr=top;
    top=ptr->next;   //or you can write top=top->next
    cout<<"Popped element is: "<<ptr->data<<endl;
    delete ptr;
    }
}
void display(){
    cout<<"DISPLAYING STACK (top to bottom)"<<endl;
    node *ptr;
    ptr=top;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

int main(){
    push();
    peek();
    pop();
    peek();
    display();
}
