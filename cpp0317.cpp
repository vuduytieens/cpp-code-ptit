#include <iostream>
#include <string>
using namespace std;

int allEven(string s) {
    for (int i=0; i<s.size(); i++) {
        if ((s[i]-'0') % 2 != 0) {
            return 0;
        }
    }
    return 1;
}

int thuanNghich(string s) {
    for (int i=0; i<s.size(); i++) {
        if (s[i] != s[s.size()-i-1]) {
            return 0;
        }
    }
    return 1;
}

int main () {
    int t; cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (allEven(s) && thuanNghich(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}