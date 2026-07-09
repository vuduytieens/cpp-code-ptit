#include <iostream>
#include <string>
using namespace std;
int main () {
    string s, word;
    getline (cin, s);
    getline (cin, word);
    int pos = s.find(word);
    s.erase(pos, word.size());
    cout << s;
}