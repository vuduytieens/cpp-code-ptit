#include <iostream>
#include <iomanip>
using namespace std;

struct ThiSinh {
    string name, birth;
    float d1, d2, d3, sum;
};

void nhap(ThiSinh&A) {
    getline (cin, A.name);
    getline (cin, A.birth);
    cin >> A.d1 >> A.d2 >> A.d3;
    A.sum = A.d1 + A.d2 + A.d3;
}

void in (ThiSinh A) {
    cout << A.name << ' ' << A.birth << ' ' << fixed << setprecision(1) << A.sum;
}

int main () {
    struct ThiSinh A;
    nhap (A);
    in(A);
    return 0;
}