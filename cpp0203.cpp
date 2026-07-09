#include <iostream>
#include <vector>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        vector <bool> mark(n+2, 0);
        for (int i=0; i<n; i++) {
            if (a[i]>=1 && a[i]<=n+1) {
                mark[a[i]] = 1;
            }
        }
        for (int i=1; i <= n+1; i++) {
            if (!mark[i]) {
                cout << i << endl;
                break;
            }
        }
    }
}