#include <iostream>
#include <string>
using namespace std;
int main () {
    int n; cin >> n;
    cin.ignore();
    string s[n];
    for (int i=0; i<n; i++) getline (cin, s[i]);
    int cnt = 0;
    for (int i=0; i<n; i++) {
        int trung = 0;
        for (int j=0; j<i; j++) {
            if (s[i]==s[j]) {
                trung = 1;
                break;
            }
        }
        if (!trung) cnt++;
    }
    cout << cnt << endl; 
}