#include <iostream>
using namespace std;
int main () {
	int t; cin >> t;
	while (t--) {
		long long n; cin >> n;
		long long f1=1, f2=1, fn;
		if (n < 3) fn = 1;
		else {
			for (int i=3; i <= n; i++) {
				fn = f1 + f2;
				f1 = f2;
				f2 = fn;
			}
		}
		cout << fn << endl;
	}
}