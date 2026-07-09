#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int k,n; cin >> k >> n;
        vector <int> v;
        for (int i=0; i<k; i++) {
            for (int j=0; j<n; j++) {
                int x; 
                cin >> x;
                v.push_back(x);
            }
        }
        sort (v.begin(), v.end());
        for (int i=0; i<v.size(); i++) {
            cout << v[i] << ' ';
        }
        cout << endl;
    }
}