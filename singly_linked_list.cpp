#include<iostream>
using namespace std;

class Node{
public:
    explicit Node(int num){
        data = num;
        next = nullptr;
    }
    int data;
    Node *next;
};

class LinkedList{
private:
    Node* head;
public:
    LinkedList(){
        head = nullptr;
    }
    int length(){
        int counter = 0;
        Node* temp = head;
        if(head == nullptr){
            return counter;
        }
        while(temp != nullptr){
            temp = temp->next;
            counter++;
        }
        return counter;
    }
    LinkedList insert(int data,int pos){
        if(pos == -1){
            Node* new_node= new Node(data);
            if(head == nullptr){
                head = new_node;
            }else{
                Node* temp = head;
                while(temp->next != nullptr){
                    temp = temp->next;
                }
                temp->next = new_node;
            }
        }
        return *this;
    }
    void display(){
        Node *temp = head;
        if(head == nullptr){
            cout<<endl<<"List is empty";
            return;
        }
        cout<<endl<<"The list is:";
        while(temp != nullptr){
            cout<<endl<<temp->data;
            temp = temp->next;
        }
    }
};

int main(){
    LinkedList myList;
    char ch;
    int data;
    do{
    cout<<"Enter item to be inserted in the list";
    cin>>data;
    myList.insert(data,-1);
    cout<<"To insert another data. Press Y";
    cin>>ch;
    }while(ch == 'Y' || ch == 'y');
    cout<<endl<<"Length of the list is:"<<myList.length();
    myList.display();
    return 0;
}