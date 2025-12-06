#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
node *start;
void insert(){
    node *ptr,*temp;
    int x;
    cout<<"Enter data after which you want to insert new data: ";
    cin>>x;
     temp=new node;
   cout<<"Enter new data: ";
   cin>>temp->data;
    ptr=start;
    while(ptr->data!=x){
        ptr=ptr->next;
    }
   temp->next=ptr->next;
   ptr->next=temp;
}
void traverse(){
    node*p;
    p=start;
    cout<<"Displaying linked list"<<endl;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    int n;
    node *ptr,*temp;
    cout<<"Enter number of nodes: ";
    cin>>n;
    cout<<"Enter data:"<<endl;
    ptr= new node;
    cin>>ptr->data;
    ptr->next=NULL;
    start=ptr;
    while(n>1){
        temp=new node;
        cin>>temp->data;
        temp->next=NULL;
        ptr->next=temp;
        ptr=temp;
        n--;
    }
    insert();
    traverse();
}