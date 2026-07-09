#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        vector <int> a(n);
        for (int i=0; i<n; i++) cin >> a[i];
        int left = lower_bound (a.begin(), a.end(), x) - a.begin();
        int right = upper_bound(a.begin(), a.end(), x) - a.begin();
        if (left==right) cout << -1 << endl;
        else cout << right-left << endl;
    }
}