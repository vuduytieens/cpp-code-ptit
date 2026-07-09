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
    friend PhanSo operator+(const PhanSo& a, const PhanSo& b) {
        long long tu = a.tu * b.mau + b.tu * a.mau;
        long long mau = a.mau * b.mau;
        long long tmp = gcd(tu, mau);
        tu /= tmp;
        mau /= tmp;
        return PhanSo(tu, mau);
    }
};

int main() {
    PhanSo p(1,1), q(1,1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}