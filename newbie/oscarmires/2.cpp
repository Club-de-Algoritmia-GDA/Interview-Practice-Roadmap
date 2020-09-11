/*
* Give me the factorial of a number iteratively
*/

#include <iostream>
using namespace std;


unsigned int factorial(unsigned int n) {
    int factorial = 1;
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
    }
    return factorial;
}

int main() {
    cout << factorial(5) << endl;
    return 0;
}