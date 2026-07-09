#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int main () {
    ifstream in ("PTIT.in");
    ofstream out ("PTIT.out");
    string line;
    while (getline (in, line)) {
        out << line << '\n';
    }
}