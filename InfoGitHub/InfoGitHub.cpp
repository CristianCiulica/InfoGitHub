#include<iostream>
using namespace std;
bool prim(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i < n / 2; i++)
		if (n % i == 0)
			return false;
	return true;
}

void DNPI(int n) {
	for (int d = 1; d <= n; d++)
		if (d % 2 == 1 && prim(d) == false && n % d == 0)
			cout << d << " ";
}

int main() {
	int n;
	cin >> n;
	DNPI(n);
	return 0;
}
