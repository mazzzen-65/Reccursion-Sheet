#include <iostream>
using namespace std;

void print(int n) {
	if (n < 10) {
		cout << n << " ";
		return;
	}
	print(n / 10);
	cout << n % 10 << " ";
}

int main() {
	int s; cin >> s;
	for (int i = 0; i <= s; i++) {
		int num;
		cin >> num; cout << endl;
		print(num);
	}
	return 0;
}