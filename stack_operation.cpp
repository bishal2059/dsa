#include <iostream>
using namespace std;

class Stack{
private:
    int size;
    int top;
    int *arr;
    int item;
public:
    Stack(int size){
        this->size=size;
        top = -1;
        arr = new int[size];
    }
    void push(int x){
        if(top == size-1){
            cout<<"Stack is full"<<endl;
        }else{
            top++;
            cout<<"Element pushed "<<x<<endl;
            arr[top] = x;
        }
    }
    int pop(){
        if (top == -1){
            cout<<"Stack is empty"<<endl;
        }else{
            item = arr[top];
            cout<<"Element popped "<<item<<endl;
            top--;
            return item;
        }
    }
    void display(){
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" "<<endl;
        }
    }
};

int main(){
Stack s(3);
s.push(2);
s.push(5);
s.push(7);
cout<<"Element in stack:"<<endl;
s.display();
s.pop();
cout<<"Element in stack:"<<endl;
s.display();
}