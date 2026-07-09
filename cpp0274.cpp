#include <iostream>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n+2];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        bool used[1000000] = {0};
        int cnt = 0;
        for (int i=0; i<n; i++) {
            if (used[i]==1) continue;
            int freq = 1;
            for (int j=i+1; j<n; j++) {
                if (a[i]==a[j]) {
                    freq++;
                    used[j] = 1;
                }
            }
            if (freq>1) cnt += freq;
        }
        cout << cnt << endl;
    }
}