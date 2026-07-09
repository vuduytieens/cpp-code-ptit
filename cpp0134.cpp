#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int found = 0;
        int cnt = 0;
        for (int i=2; i<=sqrt(n); i++) {
            while (n%i==0) {
                cnt++;
                n /= i;
                if (cnt==k) {
                    cout << i << endl;
                    found = 1;
                    break;
                }
            }
        }
        if (n>1) {
            cnt++;
            if (cnt==k) {
                cout << n << endl;
                found = 1;
            }
        }
        if (!found) cout << "-1" << endl;
    }
}