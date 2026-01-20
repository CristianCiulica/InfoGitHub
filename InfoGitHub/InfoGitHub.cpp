#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("in.txt");
int x, a = -1, b = -1;
int main() {
	while (fin >> x) {
		if (x % 2 == 0) {
			if (a == -1 && b == -1)
				a = x;
			else if (a != -1 && b == -1)
				b = x;
			else if (a != -1 && b != -1) {
				a = b;
				b = x;
			}
		}
	}
	// 1 4 6 5 7 8 5 8 
	//   a b
		// a     b
	if (a == -1 || b == -1)
		cout << "NU EXISTA\n";
	else
		cout << a << " " << b;
	fin.close();
	
	return 0;
}
