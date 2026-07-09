#include <iostream>
#include <string>
using namespace std;

class NhanVien {
    private:
    string id, name, sex, birth, address, tax, date;

    public:
        NhanVien () {
            id = "";
            name = "";
            sex = "";
            birth = "";
            address = "";
            tax = "";
            date = "";
        }

        friend istream& operator >> (istream&in, NhanVien&a) {
            getline (in, a.name);
            getline (in, a.sex);
            getline (in, a.birth);
            getline (in, a.address);
            getline (in, a.tax);
            getline (in, a.date);
            a.id = "00001";
            return in;
        }

        friend ostream& operator << (ostream&out, NhanVien a) {
            out << a.id << " " << a.name << " " << a.sex << " " << a.birth << " " << a.address << " " << a.tax << " " << a.date; 
            return out;
        }
};

int main () {
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
