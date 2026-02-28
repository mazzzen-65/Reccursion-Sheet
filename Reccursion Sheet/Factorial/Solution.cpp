#include <iostream>
using namespace std;

void factorial(int n) {
	static int x = 1;
	if (n <= 0) {
		cout << x;
		return;
	}
	x *= n;
	factorial(n - 1);
}

int main() {
	int x; cin >> x;
	factorial(x);
}