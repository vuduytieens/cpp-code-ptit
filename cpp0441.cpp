#include <iostream>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        int a[n+1];
        for (int i=1; i<=n; i++) {
            cin >> a[i];
        }
        int pos = -1;
        for (int i=1; i<=n; i++) {
            if (a[i]==x) {
                pos = i;
                break;
            }
        }
        cout << pos << endl;
    }
}