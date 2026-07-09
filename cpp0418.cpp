#include <iostream>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        int markA[100001] = {0};
        int markB[100001] = {0};
        int x;
        //mang A
        for (int i=0; i<n; i++) {
            cin >> x;
            markA[x]=1;
        }
        //mang B
        for (int i=0; i<m; i++) {
            cin >> x;
            markB[x]=1;
        }
        //hop
        for (int i=0; i<=100000; i++) {
            if (markA[i]==1 || markB[i]==1) {
                cout << i << ' ';
            }
        }
        cout << endl;
        //giao
        for (int i=0; i<=100000; i++) {
            if (markA[i]==1 && markB[i]==1) {
                cout << i << ' ';
            }
        }
        cout << endl;
    }
}