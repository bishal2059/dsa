#include <iostream>
using namespace std;

class Queue{
private:
    int size;
    int head;
    int tail;
    int *arr;
public:
    explicit Queue(int size){
        head=0;
        tail=0;
        this->size = size;
        arr = new int[size];
    }
    int isEmpty() const{
        if(tail == 0){
            return 1;
        }else{
            return 0;
        }
    }

    int isFull() const{
        if(tail == size){
            return 1;
        }else{
            return 0;
        }
    }

    void enqueue(int data){
        if(this->isFull()){
            cout<<endl<<"Queue is Full";
        }else{
            arr[tail] = data;
            cout<<endl<<"Enqueued item is:"<<data;
            tail = tail+1;
        }
    }

    void dequeue(){
        if(this->isEmpty()){
            cout<<endl<<"Queue is empty";
        } else{
            int e = arr[head];
            head = head+1;
            cout<<endl<<"Dequeued item is:"<<e;
        }
    }
    void display() {
        if (this->isEmpty()) {
            cout << endl << "Queue is empty";
        } else {
        for (int i = head; i < tail; i++) {
            cout<<endl<<arr[i];
        }
    }
    }
};

int main(){
    Queue q(12);
    q.enqueue(2);
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(9);
    q.enqueue(6);
    cout<<endl<<"Element in Queue:";
    q.display();
    q.dequeue();
    q.dequeue();
    cout<<endl<<"Element in Queue:";
    q.display();

    return 0;
}
