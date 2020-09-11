/*
* Given 2 strings representing 2 binary numbers, 
* return the addition of this 2 numbers also in binary format
*/

#include <iostream>
#include <string>
using namespace std;


string add(string binaryA, string binaryB) {
    string total = "";
    int carry = 0,
        sum = 0,
        binaryAdigit = 0,
        binaryBdigit = 0,
        i = binaryA.size() - 1,
        j = binaryB.size() - 1;
    while (i >= 0 || j >= 0) {
        // parse digits
        if (i >= 0) {
            binaryAdigit = (int) binaryA[i] - '0';
            i--;
        }
        if (j >= 0) {
            binaryBdigit = (int) binaryB[j] - '0';
            j--;
        }
        // full adder boolean equations
        sum = binaryAdigit ^ binaryBdigit ^ carry;
        carry = (binaryAdigit && binaryBdigit) ^ (binaryAdigit ^ binaryBdigit && carry);
        total.insert(0, to_string(sum));
        // reset digits
        binaryAdigit = 0;
        binaryBdigit = 0;
    }
    if (carry) {
        total.insert(0, to_string(carry));
    }
    return total;
}

int main() {
    cout << add("1100", "100") << endl;
    return 0;
}
