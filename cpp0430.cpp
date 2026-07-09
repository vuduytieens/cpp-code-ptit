#include <iostream>
#include <climits>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int check[100001] = {0};
        int x;
        long long minA = LLONG_MAX, maxA = LLONG_MIN;
        for (int i=0; i<n; i++) {
            cin >> x;
            check[x] = 1;

            if (x<minA) minA = x;
            if (x>maxA) maxA = x;
        }
        int cnt = 0;
        for (int i=minA; i<=maxA; i++) {
            if (!check[i]) cnt++;
        }
        cout << cnt << endl;
    }
}