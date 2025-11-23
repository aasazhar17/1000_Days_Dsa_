//Variables
/*Syntax:
data_type variable_name = value;
*/
#include <iostream>
using namespace std;

int main() {
    int age = 20;          // integer variable
    float salary = 55000;  // floating point variable
    char grade = 'A';      // character variable
    string name = "Rahul"; // string variable
    bool isStudent = true; // boolean variable

    cout << "Name: " << name << ", Age: " << age << endl;
    cout << "Salary: " << salary << ", Grade: " << grade << endl;
    cout << "Is Student? " << isStudent << endl;

    return 0;
}
