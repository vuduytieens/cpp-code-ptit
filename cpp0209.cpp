#include <iostream>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        int a[n+2];
        for (int i=1; i<=n; i++) {
            cin >> a[i];
        }
        while (q--) {
            int L, R;
            cin >> L >> R;
            int sum = 0;
            for (int i=L; i<=R; i++) {
                sum += a[i];
            }
            cout << sum << endl;
        }
    }
}