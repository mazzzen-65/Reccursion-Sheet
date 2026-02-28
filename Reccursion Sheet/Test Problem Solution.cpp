#include <iostream>
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




