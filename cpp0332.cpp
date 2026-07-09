#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main () {
    string s; getline(cin, s);
    for (int i=0; i<s.size(); i++) {
        s[i] = tolower (s[i]);
    }
    stringstream ss (s);
    string word, last = "", email = "";
    while (ss >> word) {
        last = word;
        email += word[0];
    }
    email.pop_back();
    email = last + email;
    email += "@ptit.edu.vn";
    cout << email;
}