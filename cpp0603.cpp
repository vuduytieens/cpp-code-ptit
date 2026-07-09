#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

class SinhVien {
private:
    string ten, lop, msv, ns;
    float gpa;
public:
    SinhVien () {
        ten = "";
        lop = "";
        msv = "";
        ns = "";
        gpa = 0;
    }

    void chuanhoaten() {
        stringstream ss(ten);
        string word;
        string res = "";
        while (ss >> word) {
            word[0] = toupper(word[0]);
            for (int i=1; i<word.size(); i++) {
                word[i] = tolower(word[i]);
            }
            res += word + " ";
        }
        res.pop_back();
        ten = res;
    }

    friend istream& operator >> (istream& in, SinhVien& a) {
        getline (in, a.ten);
        getline (in, a.lop);
        getline (in, a.ns);
        in >> a.gpa;
        a.msv = "B20DCCN001";
        if (a.ns[1]=='/') a.ns = "0" + a.ns;
        if (a.ns[4]=='/') a.ns.insert(3, "0");
        a.chuanhoaten();
        return in;
    }

    friend ostream& operator << (ostream&out, SinhVien a) {
        out << a.msv << ' ' << a.ten << ' ' << a.lop << ' ' << a.ns << ' ' << fixed << setprecision(2) << a.gpa;
        return out;
    }
};

int main () {
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}