#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void evenNum(int arr[],int index, int size) {
	if (index == size) {
		return;
	}
	evenNum(arr, index + 1, size);
	if (index % 2 == 0) {
		cout << arr[index] << " ";
	}
}

int main() {
	int s; cin >> s;
	int arr[s];
	int i = 0;
	for (i; i < s ; i++) {
		cin >> arr[i];
	}
	evenNum(arr, 0, s);
}