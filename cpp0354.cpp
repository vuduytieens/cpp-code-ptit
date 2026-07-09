#include <iostream>
#include <string>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int cnt = 1;
        for (int i=1; i<s.size(); i++) {
            if (s[i]==s[i-1]) {
                cnt++;
            }
            else {
                cout << s[i-1] << cnt;
                cnt = 1;
            }
        }
        cout << s[s.size()-1] << cnt << endl;
    }
}