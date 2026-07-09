#include <iostream>
#include <climits>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n+2];
        long long min1 = LLONG_MAX, min2 = LLONG_MAX;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            if (a[i]<min1) {
                min2 = min1;
                min1 = a[i];
            }
            else if (a[i]>min1 && a[i]<min2) {
                min2 = a[i];
            }
        }
        if (min2==LLONG_MAX) cout << -1 << endl;
        else cout << min1 << ' ' << min2 << endl;
    }
}