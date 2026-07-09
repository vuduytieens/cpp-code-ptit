#include <iostream>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long x;
        int cnt0 = 0;
        for (int i=0; i<n; i++) {
            cin >> x;
            if (x != 0) cout << x << ' ';
            else cnt0++;
        }
        for (int i=0; i<cnt0; i++) {
            cout << 0 << ' ';
        }
        cout << endl;
    }
}