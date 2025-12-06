#include <iostream>
using namespace std;

void Hanoi(int n, char A, char B, char C){
    if(n==1){
        cout<<"Move disc "<<n<<" from "<<A<<" to "<<C<<endl;
    }
    else{
        Hanoi(n-1,A,C,B);
        cout<<"Move disc "<<n<<" from "<<A<<" to "<<C<<endl;
    Hanoi(n-1,B,A,C);
    }
}

int main(){
    int n;
    cout<<"Enter number of disc: ";
    cin>>n;
    Hanoi(n,'A','B','C');
    return 0;
}