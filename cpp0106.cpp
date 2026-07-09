#include <iostream>
using namespace std;
int main () {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int ok = 1;
		for (int i=0; i<s.size(); i++) {
			if (s[i] != s[s.size()-i-1]) {
				ok = 0;
				break;
			}
		}
		if (ok) cout << "YES\n";
		else cout << "NO\n";
	}
} 