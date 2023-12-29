#include<iostream>
using namespace std;

int main(){
    int n,array[100],m,post,temp[100];
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter the elements in an array"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    cout<<"Before insertion"<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

    cout<<"Enter element to be added"<<endl;
    cin>>m;
    cout<<"Enter position to be deleted"<<endl;
    cin>>post;

    for(int i=0;i<n-post;i++){
        temp[i] = array[i+post];
    }
    n++;
    array[post] = m;
    for(int i=0;i<n-post;i++){
        array[i+post+1]=temp[i];
    }
    cout<<"After insertion:"<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}
