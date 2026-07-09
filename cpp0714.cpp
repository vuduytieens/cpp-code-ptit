#include <iostream>
#include <algorithm>
using namespace std;
int a[1005], n;

void prevPermutation() {
    int i = n - 1;
    // tìm i
    while (i >= 1 && a[i] < a[i + 1]) {
        i--;
    }

    // tìm j
    int j = n;
    while (a[j] > a[i]) {
        j--;
    }

    // đổi chỗ
    swap(a[i], a[j]);

    // đảo ngược đoạn sau
    reverse(a + i + 1, a + n + 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        prevPermutation();

        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}