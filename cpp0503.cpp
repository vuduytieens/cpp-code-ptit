#include <iostream>
using namespace std;

long long gcd (long long a, long long b) {
    while (b!=0) {
        long long r = a%b;
        a=b;
        b=r;
    }
    return a;
}

struct PhanSo {
    long long tu, mau;
};

void nhap(PhanSo& a) {
    cin >> a.tu >> a.mau;
}

void rutgon(PhanSo& a) {
    long long tmp = gcd(a.tu,a.mau);
    a.tu /= tmp;
    a.mau /= tmp;
}

void in(PhanSo a) {
    cout << a.tu << '/' << a.mau;
}

int main () {
    struct PhanSo a;
    nhap(a);
    rutgon(a);
    in(a);
}