#include <iostream>
#include <string>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int sumOdd = 0, sumEven = 0;
        for (int i=0; i<s.size(); i++) {
            int digit = s[i] - '0';
            if (i%2==0) sumEven += digit;
            else sumOdd += digit;
        }
        if ((sumOdd-sumEven)%11==0) cout << 1 << endl;
        else cout << 0 << endl;
    }
}