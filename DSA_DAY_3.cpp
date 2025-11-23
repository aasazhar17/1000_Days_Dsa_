//Data Types
/*
Basic Data Types
Data Type	Size (approx)	Example
int      	4 bytes    	10, -5, 2000
float	    4 bytes	    3.14, -2.5
double	    8 bytes	    3.1415926535
char	    1 byte	     'A', 'z'
bool	    1 byte	     true, false
string	    variable  size	"Hello"
*/
#include <iostream>
using namespace std;

int main() {
    int x = 100;
    float pi = 3.14;
    double bigPi = 3.14159265359;
    char ch = 'Z';
    bool flag = true;
    string msg = "Hello C++";

    cout << "Int: " << x << endl;
    cout << "Float: " << pi << endl;
    cout << "Double: " << bigPi << endl;
    cout << "Char: " << ch << endl;
    cout << "Bool: " << flag << endl;
    cout << "String: " << msg << endl;

    return 0;
}
