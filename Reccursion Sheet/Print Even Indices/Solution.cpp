#include <iostream>
using namespace std;

void evenNum(long arr[], long index, long size) {
	if (index == size) {
		return;
	}
	evenNum(arr, index + 1, size);
	if (index % 2 == 0) {
		cout << arr[index] << " ";
	}
}

int main() {
	long s; cin >> s;
	long arr[s];
	long i = 0;
	for (i; i < s; i++) {
		cin >> arr[i];
	}
	evenNum(arr, 0, s);
}