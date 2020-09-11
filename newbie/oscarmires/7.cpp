/*
* Python has the function .replace(). 
* Implement your own wich works as same as the python one
*/

#include <iostream>
using namespace std;


void replace(string &s, string oldS, string newS) {
    for (int i = 0; i < s.length(); i++) {
        if (s.substr(i, oldS.length()) == oldS) {
            s = 
            s.substr(0, i) 
            + newS 
            + s.substr(i+oldS.length(), s.length()-i-oldS.length());
            i += oldS.length();
        }
    }
}

int main() {
    string  myString = "This is a python program",
            oldS = "python",
            newS = "c++";
    replace(myString, oldS, newS);
    cout << myString << endl;
    return 0;
}