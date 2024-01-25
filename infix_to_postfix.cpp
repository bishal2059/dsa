#include <iostream>
#include<cstring>
using namespace std;

class Stack{
private:
    int size;
    int top;
    char *arr;
public:
    explicit Stack(int size){
        this->size=size;
        top = -1;
        arr = new char[size];
    }
    void push(char x){
        if(top == size-1){
            cout<<endl<<"Stack is full"<<endl;
        }else{
            top++;
            arr[top] = x;
        }
    }
    char pop(){
        if (top == -1){
            cout<<endl<<"Stack is empty";
        }else{
            char item = arr[top];
            top--;
            return item;
        }
    }
    char look(){
        if(top == -1){
            cout<<endl<<"Stack is empty";
        }else{
            return arr[top];
        }
    }
     int tos(){
        return top;
    }
};

int check_precedence(char ch){
    int pred;
    if(ch == '+' || ch == '-'){
        pred = 1;
    }else if( ch == '*' || ch == '/'){
        pred = 2;
    }else if(ch == '^'){
        pred = 3;
    }
    return pred;
}

int main(){
    char ch,pop_ch;
    char infix[20],post[20];
    cout<<endl<<"Enter the infix expression of less than 20 characters.";
    cin>>infix;
    int length = strlen(infix);
    Stack st(length);
    int k=0,pred,pred_pop;

    for(int j=0;j<length;j++){
        ch = infix[j];
        if(ch >= 'a' && ch <= 'z'){
            post[k++] = ch;
        }else if(ch == '('){
            st.push(ch);
        }else if(ch == ')'){
            while((pop_ch = st.pop()) != '('){
                post[k++] = pop_ch;
            }
        }else{
            if(st.tos() == -1 || st.look() == '('){
                st.push(ch);
            }else{
                pop_ch = st.pop();
                pred = check_precedence(ch);
                pred_pop = check_precedence(pop_ch);

                if(pred_pop >= pred){
                    post[k++] = pop_ch;
                    st.push(ch);
                }else{
                    st.push(pop_ch);
                    st.push(ch);
                }
            }

        }
    }

    while(st.tos() >= 0){
        post[k++] = st.pop();
    }
    post[k] = '\0';
    cout<<endl<<"The postfix expression is: "<<post;
    return 0;
}