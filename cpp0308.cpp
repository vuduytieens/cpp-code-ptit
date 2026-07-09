#include <iostream>
#include <string>
using namespace std;
int main () {
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        string s; getline(cin, s);
        int freq[100000] = {0};
        for (int i=0; i<s.size(); i++) {
            freq[s[i]]++;
        }
        for (int i=0; i<s.size(); i++) {
            if (freq[s[i]]==1) cout << s[i];
        }
        cout << endl;
    }
}