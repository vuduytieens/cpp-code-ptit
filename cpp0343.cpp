#include <iostream>
#include <string>
using namespace std;
int main () {
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        string s; getline (cin, s);
        int num = 0, even = 0, odd = 0;
        for (int i=0; i<=s.size(); i++) {
            if (i<s.size() && s[i] != ' ') {
                num = num*10 + (s[i]-'0');
            }
            else {
                if (num%2==0) even++;
                else odd++;
                num = 0;
            }
        }
        int n = even + odd;
        if ((n%2==0 && even > odd) || (n%2==1 && even < odd)) cout << "YES\n";
        else cout << "NO\n";
    }
}