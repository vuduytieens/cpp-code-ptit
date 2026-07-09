#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct SinhVien {
    string ten, lop, ns, msv;
    float gpa;
};

void nhap (SinhVien&a) {
    a.msv = "B20DCCN001";
    getline (cin, a.ten);
    getline (cin, a.lop);
    getline (cin, a.ns);
    cin >> a.gpa;
    
    if (a.ns[1] == '/') a.ns = "0" + a.ns;
    if (a.ns[4] == '/') a.ns.insert(3, "0");
}

void in(SinhVien a) {
    cout << a.msv << ' ' << a.ten << ' ' << a.lop << ' ' <<  a.ns << ' ' << fixed << setprecision(2) << a.gpa; 
}

int main () {
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}