#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	int t; cin >> t;
	while (t--) {
	char ans101[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
	char ans102[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
	int code;
	cin >> code;
	int correct = 0;
	for (int i=0; i<15; i++) {
		char x; cin >> x;
		if (code==101 && x==ans101[i]) correct++;
		else if (code==102 && x==ans102[i]) correct++;
	}
	double score = correct * (double)10/15;
	cout << fixed << setprecision(2) << score << endl;
	}
}