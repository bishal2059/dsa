#include<iostream>
using namespace std;

int main(){
    int n,array[100],post;
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter the elements in an array"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    cout<<"Before deletion"<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<"Enter position to be deleted"<<endl;
    cin>>post;
    n--;

    for(int i=post;i<n;i++){
        array[i]=array[i+1];
    }
    cout<<"After deletion:"<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}