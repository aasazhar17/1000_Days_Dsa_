#include <iostream>
using namespace std;

int main (){
    int number;
    cout <<"Enter your Number";
    cin >> number;
    if(number%2==0){
        cout <<"it is even number:"<<endl;
    }else {
        cout<<"it is odd number:"<<endl;
    }
    return 0;
}