#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <set>
using namespace std; 
int main () {
    ifstream in1 ("DATA1.in");
    ifstream in2 ("DATA2.in");
    ofstream out ("DATA.out");
    string line, word;
    set<string> s1,s2;
    
    //file1
    while (getline(in1, line)) {
        stringstream ss(line);
        while (ss >> word) {
            for (int i=0; i<word.size(); i++) {
                word[i] = tolower(word[i]);
            }
            s1.insert (word);
        }
    }

    //file2
    while (getline(in2,line)) {
        stringstream ss(line);
        while (ss >> word) {
            for (int i=0; i<word.size(); i++) {
                word[i] = tolower(word[i]);
            }
            s2.insert (word);
        }
    }

    set<string> hop = s1;
    hop.insert(s2.begin(), s2.end());
    set<string> giao;
    for (string x : s1) {
        if (s2.count(x)) giao.insert(x);
    }

    // in
    for (string x : hop) cout << x << ' ';
    cout << '\n';
    for (string x : giao) cout << x << ' ';
}