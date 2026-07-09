#include <iostream>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int x;
        int check[10] = {0}; // 0->9 
        for (int i=0; i<n; i++) {
            cin >> x;
            while (x) {
                int digit = x%10;
                check[digit] = 1;
                x /= 10;
            }
        }
        for (int i=0; i<=9; i++) {
            if (check[i]) cout << i << ' ';
        }
        cout << endl;
    }
}