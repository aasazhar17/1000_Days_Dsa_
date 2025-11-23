// find the sum of digits number;

#include <iostream>
using namespace std;

int sum_0f_digit(int n){
    int sum = 0;
    while (n>0)
    {
        /* code */
        int r = n%10;
        n/=10;
        sum += r;

    }
    return sum;
    
}
int main(){
    
    cout<<sum_0f_digit(1234)<<endl<<endl;
    return 0;
}