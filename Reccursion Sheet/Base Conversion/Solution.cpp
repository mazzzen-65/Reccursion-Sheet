#include <iostream>
using namespace std;

void convert(int n) {
	if (n == 0) {
		return;
	}
	convert(n / 2);
	cout << n % 2;
}

int main() {
	long s; cin >> s;
	for (int i = 0; i <= s - 1; i++) {
		long num;
		cin >> num;
		convert(num);
		cout << endl;
	}
	return 0;
}