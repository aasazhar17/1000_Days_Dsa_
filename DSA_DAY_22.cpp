// find sum of n numbers

//using without loop;

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter your n numbers:";
    cin>>n;
    // int i =1;
    // int sum = 0;
    // while (i<=n)
    // {
    //     sum=sum+i;
    //     i =i+1;
    // }
    // cout<<"the sum of n is:"<<sum<<endl;
    //return 0;

    int a=1;
    int l =100;
    int sum;


    sum = n/2*(a+l);
    cout<<sum;
    return 0;

}