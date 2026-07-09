#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long a[n];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort (a, a+n);
        long long ans = 1000000;
        for (int i=1; i<n; i++) {
            ans = min(ans, a[i]-a[i-1]);
        }
        cout << ans << endl;
    }
}