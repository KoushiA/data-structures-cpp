#include <iostream>
using namespace std;

struct node{
    int roll;
    node *link;
};
node *ptr;
void create();
void display();
void  deleteList();

int main(){
    create();
    display();
    deleteList();
    return 0;
}
void create(){
    node *p,*temp;
    int n;
    cout<<"Enter number of nodes: "<<endl;
    cin>>n;
    cout<<"Enter roll no:"<<endl;
    p = new node;
    cin>>p->roll;
    p->link=NULL;
    ptr=p;
    while(n>1){
        temp= new node;
        cin>>temp->roll;
        p->link=temp;
        temp->link=NULL;
        p=temp;
        n--;
    }
}
void display(){
    node *t;
    t = ptr;
    while(t!=NULL){
        cout<<t->roll<<" ";
        t=t->link;
    }
}
void deleteList() {
    node *temp;
    while (ptr != NULL) {
        temp = ptr;        // save current node
        ptr = ptr->link;   // move head forward
        delete temp;       // free memory of old node
    }
    cout << "\nAll nodes deleted!";
}