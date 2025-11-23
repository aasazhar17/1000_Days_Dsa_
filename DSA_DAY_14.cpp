// // sum of numbers from 1 to n
#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
        if(i==5){
            break;
        }
    }

    cout<<sum<<endl;
    return 0;
}

// Sum of numbers from 1 to n
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     int sum = 0;
//     for (int i = 1; i <= n; i++) {
//         sum += i;
//     }

//     cout << sum << endl;
//     return 0;
// }