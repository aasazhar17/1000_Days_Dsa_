/*
   *
  **
 ***
****

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        // Print spaces
        int space = n - i;
        while (space > 0) {
            cout << " ";
            space--;
        }

        // Print stars
        int j = 1;
        while (j <= i) {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}