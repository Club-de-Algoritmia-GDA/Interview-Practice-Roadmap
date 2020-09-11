/*
* Give me the factorial of a number recursively
*/

#include <iostream>
using namespace std;


int factorial(int num) {
    if (num > 1) {
        return num * factorial(num-1);
    } else {
        return 1;
    }
}

int main() {
    cout << factorial(10) << endl;
    return 0;
}
