//Implementing QUEUE with array
#include <iostream>
using namespace std;

int R=-1, F=-1;
int n,val; 
int queue[50];
void enqueue(){
  if(R==n-1){
    cout<<"OVERFLOW CONDITION!!"<<endl;
    return;
  }
  if(F==-1 && R==-1){
    F=0;
    R=0;
  }
  else{
    R=R+1;
  }
   cin>>val;
  queue[R]=val;
}
void display(){
  if(F==-1){
    return;
  }
    cout<<"Displaying queue"<<endl;
    for(int i=F;i<=R;++i){
    cout<<queue[i]<<" ";
    }
    cout<<endl;
}
void dequeue(){
  if (F==-1){
    cout<<"UNDERFLOW CONDTION!!"<<endl;
    return;
  }
  int key;
  key=queue[F];
  cout<<"Deleting "<<key<<endl;
  if(F==R){
    F=R=-1;
  }
  else{
    F=F+1;
  }
}
int main(){
    cout<<"Enter number of elements in queue: ";
    cin>>n;
    cout<<"Enter data:"<<endl;
    for(int i=0; i<n;i++){
    enqueue();
    }
    display();
    dequeue();
    display();
    return 0;
}