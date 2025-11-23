// Operators in C++
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    // ------------------- Arithmetic Operators -------------------
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;   // integer division
    cout << "a % b = " << (a % b) << endl;   // remainder
    cout << endl;

    // ------------------- Relational Operators -------------------
    cout << "Relational Operators:" << endl;
    cout << "(a == b) = " << (a == b) << endl;
    cout << "(a != b) = " << (a != b) << endl;
    cout << "(a > b)  = " << (a > b) << endl;
    cout << "(a < b)  = " << (a < b) << endl;
    cout << "(a >= b) = " << (a >= b) << endl;
    cout << "(a <= b) = " << (a <= b) << endl;
    cout << endl;

    // ------------------- Logical Operators -------------------
    cout << "Logical Operators:" << endl;
    cout << "((a > 5) && (b > 1)) = " << ((a > 5) && (b > 1)) << endl;
    cout << "((a > 5) || (b > 10)) = " << ((a > 5) || (b > 10)) << endl;
    cout << "(!(a > b)) = " << (!(a > b)) << endl;
    cout << endl;

    // ------------------- Assignment Operators -------------------
    cout << "Assignment Operators:" << endl;
    int x = 10;
    cout << "Initial x = " << x << endl;
    x += 5;  // x = 15
    cout << "x += 5 -> " << x << endl;
    x -= 3;  // x = 12
    cout << "x -= 3 -> " << x << endl;
    x *= 2;  // x = 24
    cout << "x *= 2 -> " << x << endl;
    x /= 4;  // x = 6
    cout << "x /= 4 -> " << x << endl;
    x %= 4;  // x = 2
    cout << "x %= 4 -> " << x << endl;
    cout << endl;

    // ------------------- Increment & Decrement -------------------
    cout << "Increment / Decrement Operators:" << endl;
    int y = 5;
    cout << "y = " << y << endl;
    cout << "y++ (post-increment) = " << y++ << endl; // prints old value, then increases
    cout << "After y++ -> " << y << endl;
    cout << "++y (pre-increment) = " << ++y << endl;  // increases first, then prints
    cout << "y-- (post-decrement) = " << y-- << endl;
    cout << "After y-- -> " << y << endl;
    cout << "--y (pre-decrement) = " << --y << endl;
    cout << endl;

    // ------------------- Bitwise Operators -------------------
    cout << "Bitwise Operators:" << endl;
    int p = 5, q = 3; // binary: p=0101, q=0011
    cout << "p & q = " << (p & q) << endl;   // AND
    cout << "p | q = " << (p | q) << endl;   // OR
    cout << "p ^ q = " << (p ^ q) << endl;   // XOR
    cout << "~p = " << (~p) << endl;         // NOT (1’s complement)
    cout << "p << 1 = " << (p << 1) << endl; // left shift
    cout << "p >> 1 = " << (p >> 1) << endl; // right shift
    cout << endl;

    // ------------------- Ternary Operator -------------------
    cout << "Ternary Operator:" << endl;
    int maxVal = (a > b) ? a : b;
    cout << "Max of a and b = " << maxVal << endl;

    return 0;
}
