#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string a;
        cin >> n >> a;

        vector<int> v;

        for (int i = 0; i < n; i++) {
            if (a[i] == '0' || a[i] == '1') continue;
            if (a[i] == '2') v.push_back(2);
            if (a[i] == '3') v.push_back(3);
            if (a[i] == '4') {
                v.push_back(3);
                v.push_back(2);
                v.push_back(2);
            }
            if (a[i] == '5') v.push_back(5);
            if (a[i] == '6') {
                v.push_back(5);
                v.push_back(3);
            }
            if (a[i] == '7') v.push_back(7);
            if (a[i] == '8') {
                v.push_back(7);
                v.push_back(2);
                v.push_back(2);
                v.push_back(2);
            }
            if (a[i] == '9') {
                v.push_back(7);
                v.push_back(3);
                v.push_back(3);
                v.push_back(2);
            }
        }

        // sắp xếp giảm dần
        sort(v.begin(), v.end(), greater<int>());

        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
        }
        cout << endl;
    }
}