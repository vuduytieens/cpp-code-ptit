#include <iostream>
#include <climits>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        long long maxA = LLONG_MIN;
        long long minB = LLONG_MAX;
        long long x;
        for (int i=0; i<n; i++) {
            cin >> x;
            if (x>maxA) maxA = x;
        }
        for (int i=0; i<m; i++) {
            cin >> x;
            if (x<minB) minB = x;
        }
        cout << maxA * minB << endl;
    }
}