//to traverse doubly linked list in both direction
#include <iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};
node *start;
void create(){
    node *ptr,*temp;
    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;
    ptr=new node;
    cout<<"Enter data:"<<endl;
    cin>>ptr->data;
    ptr->left=NULL;
    ptr->right=NULL;
    start=ptr;
    while(n>1){
    temp=new node;
    cin>>temp->data;
    temp->left=ptr;
    temp->right=NULL;
    ptr->right=temp;
    ptr=temp;
    n--;
    }
}
void traverse(){
    node *p;
    p=start;
    cout<<"DISPLAYING LINKED LIST"<<endl;
    while(p->right!=NULL){
        cout<<p->data<<" ";
        p=p->right;
    }
    cout<<p->data<<endl;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->left;
    }
}
int main(){
 create();
 traverse();
}