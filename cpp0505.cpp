#include<iostream>
#include <string>
using namespace std;

struct NhanVien {
    string name, sea, Birthdate, dc, sdt, date, id;
};

void nhap(NhanVien& a) {
    getline(cin, a.name);
    getline(cin, a.sea);
    getline(cin, a.Birthdate);
    getline(cin, a.dc);
    getline(cin, a.sdt);
    getline(cin, a.date);
    a.id = "00001";
}

void in(NhanVien a) {
    cout << a.id << " " << a.name << " " << a.sea << " " << a.Birthdate << " " << a.dc << " " << a.sdt << " " << a.date;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}