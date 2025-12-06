#include <iostream> 
using namespace std;

int main(){
    int n;
    int arr[50];
    cout<<"Enter the number of elements: "<<endl;
     cin>>n;
    cout<<"ORIGINAL ARRAY:"<<endl;                     
    for(int i=0;i<n;i++){           //loop for taking array inputs from user
        cin>>arr[i];
    }
    int loc, element;
    cout<<"Enter the location to insert the element: "<<endl;
    cin>>loc;
    cout<<"Enter the element to insert: "; 
    cin>>element;
    //INSERTION
    loc=loc-1;                                           // for 1 based indexing so user do not get confused
    for (int i=n; i>=loc;i--){                           //backward shifting to allocate a free space to insert the data.
        arr[i+1]=arr[i];
    }
    n=n+1;
    arr[loc]=element; 
    cout<<"NEW ARRAY AFTER INSERTION"<<endl;                                  //assigning value to the free memory created
    for(int i=0;i<n;i++){                               //loop to print new array
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    //DELETION
    int del;
    cout<<"Enter the position of the element to be deleted:"<<endl;                   // for deletion of element 1 based indexing
    cin>>del;
    del=del-1;
    for(int i=del;i<n;i++){
        arr[i]=arr[i+1];
    }
    n=n-1;
    for(int i=0;i<n;i++){                                              //to display array after deletion
        cout<<arr[i]<<" ";
    }
    return 0;
}