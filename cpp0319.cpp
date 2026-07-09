#include <iostream>
using namespace std;
int main () {
    int m, s; cin >> m >> s;
    if (s>9*m || s==0 && m>1) {
        cout << "-1 -1";
        return 0;
    }
    // min
    int sum = s;
    for (int i=0; i<m; i++) {
        for (int d = (i==0 ? 1:0); d<=9; d++) {
            if (sum-d >= 0 && sum-d <= 9*(m-i-1)) {
                cout << d;
                sum -= d;
                break;
            }
        }
    }
    cout << ' ';
    // max
    sum = s;
    for (int i=0; i<m; i++) {
        int d = min(9, sum);
        cout << d;
        sum -= d;
    }
}