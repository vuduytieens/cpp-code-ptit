#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int cnt = 1;

struct NhanVien {
    string name, sex, birthdate, address, date, msthue;
    int id;
};

void nhap(NhanVien& x) {
    x.id = cnt++;
    do getline(cin, x.name);
    while (x.name == "");
    getline(cin, x.sex);
    getline(cin, x.birthdate);
    getline(cin, x.address);
    getline(cin, x.msthue);
    getline(cin, x.date);
}

void inds(NhanVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << setw(5) << setfill('0') << ds[i].id << " ";
        cout << ds[i].name << " "
             << ds[i].sex << " "
             << ds[i].birthdate << " "
             << ds[i].address << " "
             << ds[i].msthue << " "
             << ds[i].date << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) nhap(ds[i]);
    inds(ds,n);
    return 0;
}