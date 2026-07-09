#include <iostream>
#include <fstream>
using namespace std;
int main () {
    ifstream in ("DATA.in");
    ofstream out ("DATA.out");
    int cnt[1001] = {0};
    int x;
    while (in >> x) {
        cnt[x]++;
    }
    for (int i=0; i<1000; i++) {
        if(cnt[i]>0) {
            cout << i << ' ' << cnt[i] << '\n';
        }
    }
}