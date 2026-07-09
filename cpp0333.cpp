#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main () {
    string s;
    getline (cin, s);
    for (int i=0; i<s.size(); i++) {
        s[i] = tolower(s[i]);
    }
    string word, words[100];
    int n=0;
    stringstream ss(s);
    while (ss >> word) {
        words[n++] = word;
    }
    for (int i=0; i<n-1; i++) {
        words[i][0] = toupper (words[i][0]);
    }
    for (int i=0; i<n-1; i++) {
        cout << words[i];
        if (i<n-2) cout << ' ';
    }
    cout << ", ";
    for (int i=0; i<words[n-1].size(); i++) {
        words[n-1][i] = toupper(words[n-1][i]);
    }
    cout << words[n-1];
}