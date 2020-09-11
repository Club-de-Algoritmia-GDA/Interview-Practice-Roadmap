/*
* Given a string and a number, 
* return the word encrypted using cesar cypher
*/

#include <iostream>
using namespace std;


void caesarEcrypt(string& plainTxt, int shift) {
    for (int i = 0; i < plainTxt.size(); i++) {
        plainTxt[i] += shift;
    }
}

int main() {
    string plainTxt = "HELLO";
    caesarEcrypt(plainTxt, 2);
    cout << plainTxt << endl;
}