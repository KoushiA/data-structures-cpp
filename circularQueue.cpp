#include <iostream>
using namespace std;
//implementing circular queue using linked list
struct node{
    int data;
   node *next;
};
int n;
node *F=NULL, *R=NULL;
void enqueue(){
  node *ptr;
  ptr = new node;
  cin>>ptr->data;
  if(F==NULL){
    F=R=ptr;
    R->next=F;
  }
  else{
    R->next=ptr;
    R=ptr;
    R->next=F;
  }
}
void display(){
    if(F==NULL){
        cout<<"Empty queue"<<endl;
        return;
    }
    node *p;
    p=F;
    cout<<"DISPLAYING QUEUE"<<endl;
    do {
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=F);
    cout<<endl;
}
void dequeue(){
    if(F==NULL){
        cout<<"UNDERFLOW CONDITION!!"<<endl;
        return;
    }
    if(F==R){
        cout<<"Deleting "<<F->data<<endl;
        delete F;
        F=R=NULL;
    }
    else{
        node *temp=F;
        cout<<"Deleting "<<temp->data<<endl;
        F=F->next;
        R->next=F;
        delete temp;
    }
}
int main(){
    cout<<"Enter number of elements in queue: ";
    cin>>n;
    cout<<"Enter data:"<<endl;
    for(int i=0;i<n;++i){
    enqueue();
    }
    display();
    dequeue();
    display();
}