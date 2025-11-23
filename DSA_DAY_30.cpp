/*
*
**
***
****
*****
******
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter your n number:"<<endl;
    cin>>n;

    int row = 1;
    while (row<=n)
    {
        /* code */
        int col = 1;
        while (col<=row)
        {
            /* code */
            cout<<"*";
            col = col+1;
        }
        cout<<endl;
        row = row+1;
        
    }
    
    return 0;
    
}