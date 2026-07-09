#include <iostream>
#include <cctype>
using namespace std;
int main () {
    string s;
    cin >> s;
    for (int i=0; i<s.size(); i++) {
        if (s[i] != 'u' && s[i] != 'e' && s[i] != 'o' && s[i] != 'a' && s[i] != 'i' && s[i] != 'y'
        && s[i] != 'U' && s[i] != 'E' && s[i] != 'O' && s[i] != 'A' && s[i] != 'I' && s[i] != 'Y') {
            cout << "." << (char)tolower(s[i]);
        }
    }
}

