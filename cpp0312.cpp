#include <iostream>
using namespace std;
int main () {
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline (cin, s);
        int k; cin >> k;
        cin.ignore();
        int cnt[26];
        for (int i=0; i<26; i++) {
            cnt[i] = 0;
        }
        for (int i=0; i<s.size(); i++) {
            if (s[i]>='a' && s[i]<='z') {
                cnt[s[i]-'a'] = 1;
            }
        }
        int have = 0;
        for (int i=0; i<26; i++) {
            if (cnt[i]==1) have++;
        }
        int need = 26 - have;
        if (k>=need) cout << 1 << endl;
        else cout << 0 << endl;
    }
}