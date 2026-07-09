#include <iostream>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long x;
        int check[1000001] = {0};
        for (int i=0; i<n; i++) {
            cin >> x;
            if (x>=0 && x<n) check[x]=1;
        }
        for (int i=0; i<n; i++) {
            if (check[i]) cout << i << ' ';
            else cout << -1 << ' ';
        }
        cout << endl;
    }
}