#include <iostream>
using namespace std;

void findMax(int arr[], int index, int n, int& maxVal) {
    if (index == n)
        return;
    if (arr[index] > maxVal)
        maxVal = arr[index];
    findMax(arr, index + 1, n, maxVal);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int maxVal = arr[0];
    findMax(arr, 0, n, maxVal);
    cout << maxVal;
}