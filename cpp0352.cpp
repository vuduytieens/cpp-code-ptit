#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

map<string, int> mp;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string s;
        getline(cin, s);

        // chuẩn hóa: viết thường
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }

        // tách từ
        stringstream ss(s);
        vector<string> v;
        string tmp;

        while (ss >> tmp) {
            v.push_back(tmp);
        }

        // tạo email
        string email = v[v.size() - 1]; // tên

        for (int i = 0; i < v.size() - 1; i++) {
            email += v[i][0];
        }

        // xử lý trùng
        mp[email]++;
        if (mp[email] > 1) {
            email += to_string(mp[email]);
        }

        cout << email << "@ptit.edu.vn" << endl;
    }
}