/*
* Given a string return me the word backwards. 
* If s="diego" then the answer is ogeid
*/

#include <iostream>
#include <string>
using namespace std;



string backwards(string word) {
    string newWord;
    for (int i = word.size()-1; i >= 0; i--) {
        newWord.push_back(word[i]);
    }
    return newWord;
}

int main() {
    string word = "hola";
    cout << backwards(word) << endl;
    return 0;
}
