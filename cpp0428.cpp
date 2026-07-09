#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector <int> v;
        int x;
        for (int i=0; i<n; i++) {
            cin >> x;
            v.push_back(x);
        }
        for (int i=0; i<m; i++) {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for (int i=0; i<v.size(); i++) {
            cout << v[i] << ' ';
        }
        cout << endl;
    }
}