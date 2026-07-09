#include <iostream>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        long long n,k;
        cin >> n >> k;
        long long full = n/k;
        long long sum_cycle = k*(k-1)/2;
        long long r = n%k;

        long long s = full*sum_cycle + r*(r+1)/2;

        if (k==s) cout << 1 << endl;
        else cout << 0 << endl;
    }
}