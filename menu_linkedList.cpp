#include <iostream>
using namespace std;

struct node{
    int data;
    node *link;
};
node *start;
void create();
void traverse();
void at_start();
void specific();
void last();

int main(){
    int n;
    do{
        cout<<"1.Create linked list"<<endl;
        cout<<"2.Traverse linked list"<<endl;
        cout<<"3.Insert element at start"<<endl;
        cout<<"4.Insert element at specific position"<<endl;
        cout<<"5.Insert element at last position"<<endl;
        cout<<"ENTER YOUR CHOICE:";
        cin>>n;
        switch(n){
            case 1:
            create();
            break;
            case 2:
            traverse();
            break;
            case 3:
            at_start();
            break;
            case 4:
            specific();
            break;
            case 5:
            last();
            break;
            default:
            cout<<"INVALID"<<endl;
            break;
        }
        cout<<endl;
    }while(n<6);
}
void create(){
    int x;
    cout<<"CREATING LINKED LIST"<<endl;
    cout<<"Enter number of nodes: ";
    cin>>x;
    node *ptr, *temp;
    ptr = new node;
    cout<<"Enter data"<<endl;
    cin>>ptr->data;
    ptr->link=NULL;
    start=ptr;
    while(x>1){
        temp=new node;
        cin>>temp->data;
        temp->link=NULL;
        ptr->link=temp;
        ptr=temp;
        x--;
    }
    traverse();
}
void traverse(){
    cout<<"DISPLAYING ELEMENTS"<<endl;
    node *p;
    p=start;
    while(p != NULL){
        cout<<p->data<<" ";
        p=p->link;
    }
}
void at_start(){
    node *temp;
    cout<<"Enter data"<<endl;
    temp=new node;
    cin>>temp->data;
    temp->link=start;
    start=temp;
    traverse();
}
void specific(){
    int loc;
    cout<<"Enter location"<<endl;
    cin>>loc;
    cout<<"Enter data"<<endl;
    node *ptr;
    ptr=new node;
    cin>>ptr->data;
    ptr->link=NULL;
    if(loc==1){
        ptr->link=start;
        start=ptr;
    }
    else{
        node *temp;
        temp=start;
        for(int i=1; i<loc-1;++i){
            temp=temp->link;
        }
        ptr->link=temp->link;
        temp->link=ptr;
    }
    traverse();
}
void last(){
    node *temp,*ptr;
    ptr=new node;
    cout<<"Enter data"<<endl;
    cin>>ptr->data;
    ptr->link=NULL;
    if(start==NULL){
        start=ptr;
    }
    else{
        temp=start;
        while(temp->link!=NULL){
            temp=temp->link;
        }
      temp->link=ptr;

   }
   traverse();
    }
