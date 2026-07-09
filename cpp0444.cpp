#include <iostream>
using namespace std;

int search_round (int a[], int n, int x) {
    int l=0, r=n-1;
    while (l<=r) {
        int mid = (l+r)/2;
        if (a[mid]==x) return mid+1;
        if (l<=mid) {
            if (x>=a[l] && x<a[mid]) r=mid-1;
            else l=mid+1;
        }
        else {
            if (x>a[mid] && x<=a[r]) l=mid+1;
            else r=mid-1;
        }
    }
    return -1;
}
int main () {
    int t; cin >> t;
    while (t--) {
        int n,x; cin >> n >> x;
        int a[n+2];
        for (int i=0; i<n; i++) cin >> a[i];
        cout << search_round(a,n,x) << endl;
    }
}