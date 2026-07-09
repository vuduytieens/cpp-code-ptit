#include <iostream>
#include <cmath>
using namespace std;
int main () {
	int t; cin >> t;
	while (t--) {
		long long n; cin >> n;
		long long maxPrime = 0;
		for (int i=2; i <= sqrt(n); i++) {
			while (n%i==0) {
				maxPrime = i;
				n /= i;
			}
		}
		if (n>1) maxPrime = n;
		cout << maxPrime << endl;
	}
}