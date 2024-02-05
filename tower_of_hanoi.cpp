#include <iostream>
using namespace std;

class toh {
public:
    void TOH(int n, char source, char destination, char auxillary);
};

void toh::TOH(int n, char source, char destination, char auxillary){
    if(n==0){
        return;
    }

    TOH(n-1, source, auxillary, destination);
    cout << "Move disk " << n << " from rod " << source
         << " to rod " << destination << endl;
    TOH(n-1, auxillary , destination, source);
}

int main(){
    toh t;
    t.TOH(3,'a','b','c');
    return 0;
}