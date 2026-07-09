#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        int a[n];
        for (int i=1; i<=n; i++) {
            cin >> a[i];
        }
        if (binary_search(a, a+n, x)) cout << 1 << endl;
        else cout << -1 << endl;
    }
}