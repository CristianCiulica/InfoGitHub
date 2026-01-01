//Subiect Bac2025 S3, Ex2.
#include <iostream>
using namespace std;
int a[100][100], i, j, n, m;
int main(){
	cin >> n >> m;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> a[i][j];
	int nrMin = INT_MAX, colMin;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (a[i][j] < nrMin) {
				nrMin = a[i][j];
				colMin = j;
			}
	int ultimul = a[n - 1][m - 1];
	for (i = 0; i < n; i++)
		a[i][colMin] = ultimul;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}
