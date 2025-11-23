// pass by value in function

/*
copy of argument is passed to function;
*/

#include <iostream>
using namespace std;

int sum(int a , int b){
    return a+b;
}

int main(){
    int x =1;
    int y =3;
    cout<<sum(x,y)<<endl;
}