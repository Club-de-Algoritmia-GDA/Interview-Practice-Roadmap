/*
* Given a number, return its binary representation
*/

#include <iostream>
#include <deque>
using namespace std;


deque<int> binary(int n) {
    deque<int> binaryExpr;
    while (n != 0) {
        binaryExpr.push_front(n%2);
        n /= 2;
    }
    return binaryExpr;
}

int main() {
    deque<int> bin = binary(4);
    for (int i : bin) {
        cout << i;
    }
    cout << endl;
    return 0;
}