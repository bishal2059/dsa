#include <iostream>
using namespace std;

int fib(int n)
{
    int num = n;
    if (num == 0){
        return 0;
    }
    else if (num == 1){
        return 1;
    }
    else{
        return fib(num - 1) + fib(num - 2);
    }
}


int main()
{
    int num;
    cout<<endl<<"Enter the term of fibonacci series";
    cin>>num;
    cout<<endl;
    int i;
    for (i = 0; i < num; i++){
        cout<<" "<<fib(i);
    }
    return 0;
}