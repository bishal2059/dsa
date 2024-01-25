#include <iostream>
using namespace std;

class Stack{
private:
    int size;
    int top;
    int *arr;
public:
    explicit Stack(int size){
        this->size=size;
        top = -1;
        arr = new int[size];
    }
    void push(int x){
        if(top == size-1){
            cout<<endl<<"Stack is full"<<endl;
        }else{
            top++;
            cout<<endl<<"Element pushed "<<x;
            arr[top] = x;
        }
    }
    int pop(){
        if (top == -1){
            cout<<endl<<"Stack is empty";
        }else{
            int item = arr[top];
            cout<<endl<<"Element popped "<<item;
            top--;
            return item;
        }
    }
    void display(){
        for(int i=top;i>=0;i--){
            cout<<endl<<arr[i];
        }
    }
};

int main(){
    Stack s(12);
    s.push(2);
    s.push(5);
    s.push(7);
    s.push(9);
    s.push(6);
    cout<<endl<<"Element in stack:";
    s.display();
    s.pop();
    s.pop();
    cout<<endl<<"Element in stack:";
    s.display();
    return 0;
}