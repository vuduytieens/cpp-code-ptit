#include <iostream>
#include <fstream>
#include <set>
#include <string>
#include <sstream>
using namespace std;
int main () {
    ifstream in ("VANBAN.in");
    ofstream out ("VANBAN.out");
    set<string> s;
    string line, word;
    while (getline (in,line)) {
        stringstream ss(line);
        while (ss >> word) {
            for (int i=0; i<word.size(); i++) {
                word[i] = tolower(word[i]);
            }
            s.insert(word);
        }
    }
    for (string x : s) {
        cout << x << '\n';
    }
}