/*
1
22
333
4444
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter your n number:"<<endl;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        /* code */
        int j = 1;
        while (j<=i)
        {
            /* code */
            cout<<i;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
    
}