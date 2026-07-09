#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int main () {
    ifstream in ("DATA.in");
    ofstream out ("DATA.out");
    string line, word;
    long long sum = 0;
    while (getline (in, line)) {
        stringstream ss (line);
        while (ss >> word) {
            try {
                long long x = stoll(word);
                sum += x;
            }
            catch(...) {};
        }
    }
    cout << sum;
}