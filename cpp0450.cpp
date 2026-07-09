#include <iostream>
#include <vector>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n+1];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        vector <int> seen (100001, 0);
        int ans = -1;
        for (int i=0; i<n; i++) {
            if (seen[a[i]]) {
                ans = a[i];
                break;
            }
            seen[a[i]] = 1;
        }
        cout << ans << endl; 
    }
}