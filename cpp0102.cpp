#include <iostream>
using namespace std;
int main () {
	int t; cin >> t;
	while (t--) {
		char s;
		cin >> s;
		if (s >= 'a' && s <= 'z') s -= 32;
		else if (s >= 'A' && s <= 'Z') s+= 32;
		cout << s << endl;
	}	
}