#include <iostream>
using namespace std;
int main () {
	int t;
	cin >> t;
	while (t--) {
		int a,b;
		cin >> a >> b;
		long long f1=1, f2=1, fn;
		for (int i=1; i<=b; i++) {
			if (i<3) fn=1;
			else {
				fn = f1 + f2;
				f1=f2;
				f2=fn;
			}
			if (i>=a) cout << fn << ' ';
		}
		cout << endl;
	}
}