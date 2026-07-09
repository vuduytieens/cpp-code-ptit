#include <iostream>
#include <set>
#include <fstream>
using namespace std;
using namespace std;

class IntSet {
private:
    set<int> s;
public:
    void input (int n, ifstream &in) {
        int x;
        for (int i=0; i<n; i++) {
            in >> x;
            s.insert(x);
        }
    }

    IntSet intersection (IntSet other) {
        IntSet res;
        for (int x : s) {
            if(other.s.count(x)) {
                res.s.insert(x);
            }
        }
        return res;
    }

    void output (ofstream &out) {
        for (int x : s) {
            cout << x << ' '; 
        }
    }
};

int main () {
    ifstream in("DATA.in");
    ofstream out("DATA.out");

    int n, m;
    in >> n >> m;

    IntSet A,B;
    A.input(n, in);
    B.input(m, in);

    IntSet C = A.intersection(B);
    C.output(out);
}