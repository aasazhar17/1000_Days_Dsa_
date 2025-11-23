// function in c++

#include <iostream>
using namespace std;

// function defination

//without parameter function
void printhello(){    // no return type
    cout<<"print hello:"<<endl;
}

// parameter with function
int printhello(int a, int b){
    return a+b;
    
}
int main() {

    printhello();
    cout<<printhello(2,3)<<endl;
    printhello();
    printhello();

    return 0;

}