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
void at_last();
void at_location();

int main(){
    int n;
    do{
cout<<"1. Create linked list "<<endl;    
cout<<"2. Traverse linked list "<<endl;
cout<<"3. Insertion at begining"<<endl;   
cout<<"4. Insertion at the last"<<endl;
cout<<"5. Insertion at specific location"<<endl;
cout<<"Enter your choice"<<endl;
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
    at_last();
    break;
    case 5:
    at_location();
    break;
    default:
    cout<<"INVALID"<<endl;
    break;
}
cout<<endl;
    cout<<"********************"<<endl;
    }while (n<6);
}

void create(){
    int x;
    node *ptr;
    cout<<"Enter number of nodes"<<endl;
    cin>>x;
    cout<<"Enter elements"<<endl;
     ptr = new node;
     cin>>ptr->data;
     ptr->link=NULL;
     start=ptr;
     while(x>1){
        node *temp;
        temp = new node;
        cin>>temp->data;
        ptr->link=temp;
        temp->link=NULL;
        ptr=temp;
        x--;
     }
     traverse();
}

void traverse(){
    cout<<"Displaying Linked List"<<endl;
    node *p;
    p=start;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->link;
    }
}

void at_start(){
    cout<<"Enter element to insert "<<endl;
    node *temp1;
    temp1=new node;
    cin>>temp1->data;
    temp1->link=start;
    start = temp1;
    traverse();
}

void at_last(){
    cout<<"Enter element to insert "<<endl;
    node *temp2;
    temp2=new node;
    cin>>temp2->data;
    temp2->link=NULL;
    if (start==NULL){
        start=temp2;
    }
    else{
        node *ptr2;
        ptr2=start;
        while(ptr2->link!=NULL){
            ptr2->link=temp2;
        }
        ptr2->link=temp2;
    }
    traverse();
}
void at_location(){
    int loc;
    cout<<"Enter location to insert element";
    cin>>loc;
    node *temp3;
    temp3=new node;
    cout<<"Enter element to insert"<<endl;
    cin>>temp3->data;
    temp3->link=NULL;

    if (loc==1){
        temp3->link=start;
    }
    else{ 
    node *ptr3;
    ptr3=start;
    int i=1;
    while(i<loc-1){
        temp3=temp3->link;
        i++;
    }
    ptr3->link=temp3->link;
    temp3->link=ptr3;
    }    
    traverse();
}