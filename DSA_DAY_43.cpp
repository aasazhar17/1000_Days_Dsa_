// minimum of two numbers

#include <iostream>
using namespace std;

int minimum_number(int a, int b){
    if(a>b){
       return b;

    }else{
        return a;
    }
}

int main(){

    cout<<minimum_number(2,3);
    return 0;
}