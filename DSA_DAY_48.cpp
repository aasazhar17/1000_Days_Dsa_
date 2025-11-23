// bitwise operator;

#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 3;
    cout << (a & b)<<endl; // 1
    cout << (a | b)<<endl; // 7
    cout << (a ^ b)<<endl; // 6
    cout << (~a)<<endl;    // -6
    cout << (a << 1)<<endl; // 10
    cout << (a >> 1)<<endl; // 2

    /*✅ Flag Management
Multiple boolean values ko ek hi integer mein store karna:
*/


    int flags = 0;
    flags |= (1 << 2); // Set 3rd bit

    // checking odd even
    int num;
    if (num & 1) cout << "Odd";
    else cout << "Even";

    // swapping 
    a ^= b;
    b ^= a;
    a ^= b;

    //power of 2 check
    int n;
    if ((n & (n - 1)) == 0) cout << "Power of 2";
    return 0;
}