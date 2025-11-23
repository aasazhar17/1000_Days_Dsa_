// prime number or not
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter your n number:"<<endl;
    cin>>n;

    int i = 2;
    while (i<n)
    {
        if(i%2==0){
            cout<<"not prime number:"<<endl;
        }
        else{
            cout<<"prime number:"<<endl;
        }
        i=i+1;
    }
    
}