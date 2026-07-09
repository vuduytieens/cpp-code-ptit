#include <iostream>
using namespace std;
int main () {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int ok = 1;
		for (int i=1; i < s.size(); i++) {
			if (abs(s[i]-s[i-1]) != 1) {
				ok = 0;
				break;
			}
		}
		if (ok) cout << "YES\n";
		else cout << "NO\n";
	}
}