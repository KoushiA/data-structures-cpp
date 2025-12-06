#include <iostream>
using namespace std;

// first we have created a struct or class having two parts: roll to store data and link which will store address of next node
struct node{                 
   int roll_no;
   node *link;
};

node *ptr;  //globally declaring ptr which always stores address of first node.
void create();              //function are declared
void display();
void deleteList();

int main(){              // main function to call other function
    create();
    display();
     deleteList();
    return 0;
}
void create(){
    node *p, *temp;           //declaring new variables
    int n;
    cout<<"Enter number of nodes: "<<endl;
    cin>>n;
    p= new node;        //creating new node(basically first node is being created here which is p.)
    cin>>p-> roll_no;   //enter data in p - roll no
    p->link=NULL;       //agar p k link null hai toh 
    ptr = p;             // ptr ko bhi first node k address do kyunki p aage move krega nd hm starting address loose kr denge
    while (n>1){         //loop for creating more nodes
        temp = new node;    //making another node of temp name
        cin>>temp->roll_no;   // take input in temp k roll
        p->link=temp;        //p ki link m temp k address ho
        temp->link = NULL;    //to make sure no garbage value is stored
        p=temp;               //moving p forward to create new node temp
        n--;        
    }
}
    void display(){
        node *t;
        t= ptr;                  // assigning t address of firts node
        while(t!=NULL){
            cout<<t->roll_no<<" ";
            t=t->link;              
        }
    }
void deleteList() {
    node *temp;
    while (ptr != NULL) {
        temp = ptr;        // save current node
        ptr = ptr->link;   // move head to next node
        delete temp;       // free memory of current node
    }
    cout << "\nAll nodes deleted!";
}