#include<iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while(b != 0) {
        long long r = a%b;
        a=b;
        b=r;
    }
    return a;
}

struct PhanSo {
    long long a, b;
};

void nhap(PhanSo& x) {
    cin >> x.a >> x.b;
}

PhanSo tong(PhanSo& x, PhanSo& y) {
    PhanSo res;
    long long tu = x.a * y.b + y.a * x.b, mau = x.b * y.b;;
    long long tmp = gcd(tu, mau);
    res.a = tu / tmp;
    res.b = mau / tmp;
    return res;
}

void in(PhanSo x) {
    cout << x.a << "/" << x.b;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}