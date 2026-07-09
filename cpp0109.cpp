#include <iostream>
using namespace std;
int main () {
	int n;
	cin >> n;
	int start = pow(10,n-1);
	int end = pow(10,n) - 1;
	int cnt = 0;
	for (int i=start; i<=end; i++) {
		int t=i;
		int chan = 0, le = 0;
		while (t) {
			if ((t%10)%2==0) chan++;
			else le++;
			t /= 10;
		}
		if (chan==le) {
			cout << i << ' ';
			cnt++;
			if (cnt%10==0) cout << endl;
		}
	}
}