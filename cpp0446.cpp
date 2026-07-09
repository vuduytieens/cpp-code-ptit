#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n+1];
        for (int i=0; i<n; i++) cin >> a[i];
        long long best = a[0] + a[1];
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                long long sum = a[i] + a[j];
                if (llabs(sum) < llabs(best)) {
                    best = sum;
                }
            }
        }
        cout << best << endl;
    }
}