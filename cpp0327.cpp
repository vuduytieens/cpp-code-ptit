#include <iostream>
#include <string>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int du = 0;
        for (int i=0; i<s.size (); i++) {
            du = du*2 + s[i]-'0';
            du %= 5;
        }
        if (du==0) cout << "Yes\n";
        else cout << "No\n";
    }
}