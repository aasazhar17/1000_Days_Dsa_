// sum of all od numbers from 1 to n?
#include <iostream>
using namespace std;

int main(){
    int n = 7;
    int sum = 1;
    for (int i = 1; i<=n;i++){
        if(n%2!=0){
            sum+= i;
        }
    }
    cout<<sum<<endl;
    return 0;
}