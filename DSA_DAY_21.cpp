// print 1 to n using while loop

// #include <iostream>
// using namespace std;

// int main(){
//     int i =1;
//     while (i<=5)
//     {
//         cout<<i<<endl;
//         i++;
//     }
    
// }

// #include <iostream>
// using namespace std;
// int main() {
//     for(int i =1;i<=5;i++){
//         cout<<i<<endl;
//     }
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter your number:"<<endl;
    cin>>n;

    int i =1;
    while (i<=n)
    {
        cout<<i<<endl;
        i++;
    }
    return 0;
    
}