#include<iostream>
using namespace std;
int a[20][20], i, j, sMax, n, m;
int main() {
	cin >> n >> m;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> a[i][j];
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < m - 1; j++) {
			int sumaCurenta = 0;
			sumaCurenta = a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1] + a[i][j];
			if (sumaCurenta > sMax)
				sMax = sumaCurenta;
		}
	}
	cout << sMax;
	return 0;
}
