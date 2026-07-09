#include <iostream>
#include <vector>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n+2];
        vector <int> mark (n+1, 0);
        for (int i=1; i<n; i++) {
            cin >> a[i];
            mark[a[i]] = 1;
        }
        for (int i=1; i<=n; i++) {
            if (!mark[i]) {
                cout << i << endl;
                break;
            }
        }
    }
}