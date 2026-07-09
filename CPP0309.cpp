#include <iostream>
#include <string>
using namespace std;
int main () {
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		getline(cin, s);
		int cnt = 0;
		for (int i=1; i < s.size(); i++) {
			if (!isspace(s[i]) && isspace(s[i-1])) {
				cnt++;
			}
		}
		cout << cnt+1 << endl;

	}
}