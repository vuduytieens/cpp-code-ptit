#include <iostream>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int a,m;
        cin >> a >> m;
        int ans = -1;
        for (int i=0; i<=m-1; i++) {
            if ((a*i)%m==1) {
                ans = i;
            }
        }
        cout << ans << endl;
    }
}