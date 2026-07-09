#include <iostream>
using namespace std;

long long gcd (long long a, long long b) {
	while (b != 0) {
		long long r = a%b;
		a = b; 
		b = r;
	}
	return a;
}

long long lcm (long long a, long long b) {
	return a*b / gcd(a,b);
}

int main () {
	int t; cin >> t;
	while (t--) {
		long long n; cin >> n;
		long long ans = 1;
		for (long long i = 2; i <= n; i++) {
			ans = lcm (ans, i);
		}
		cout << ans << endl;
	}
}