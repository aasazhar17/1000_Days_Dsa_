/*
    1
   222
  33333
 4444444
555555555

*/

#include <iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"enter your n numbers of line:"<<endl;
    cin>>n;

    int row = 1;
    while (row<=n)
    {
        /* code space (1st tringle)*/ 
        int space = n-row;
        while (space>0)
        {
            /* code */
            cout<<" ";
            space = space-1;
        }
        int col = 1;
        while (col<=row)
        {
            /* code 2nd tringle*/
            cout<<col;  // cout<<"*";
            col = col+1;
            

        }
        // 3rd triangle
        int start = row -1;
        while (start>0)
        {
            /* code */
            cout<<start;    // cout<<"*";
            start--;
        }
        cout<<endl;
        row++;
        
        
        
    }
    return 0;
    
}