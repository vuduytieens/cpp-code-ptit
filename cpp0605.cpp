#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

class PhanSo {
private:
    long long tu, mau;
public:
    PhanSo(long long t, long long m) {
        tu = t;
        mau = m;
    }
    friend istream& operator>>(istream& in, PhanSo& x) {
        in >> x.tu >> x.mau;
        return in;
    }
    friend ostream& operator<<(ostream& out, PhanSo x) {
        out << x.tu << "/" << x.mau;
        return out;
    }
    void rutgon() {
        long long tmp = gcd(tu, mau);
        tu /= tmp;
        mau /= tmp;
    }
};

int main() {
    PhanSo p(1,1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}