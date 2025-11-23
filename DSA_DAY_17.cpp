// while loop

#include <iostream>
using namespace std;

int main(){
    double balance = 1000;
    double withrawalAmount;

    cout<<"Enter Amount";
    cin>>withrawalAmount;
    while (withrawalAmount>0)
    {
        if (withrawalAmount<=balance)
        {
            balance-=withrawalAmount;
            cout<<withrawalAmount;
        }else{
            cout<<"insufficient balance"<<endl;
        }
    }
    cout<<"Enter Amount (0Exit)"<<endl;
    cin>>withrawalAmount;
    return 0;
}