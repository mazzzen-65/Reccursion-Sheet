#include <iostream>
using namespace std;

void sumArray(int arr[], int index, int n, long long total) {
    if (index == n) {
        cout << total;
        return;
    }
    total += arr[index];
    sumArray(arr, index + 1, n, total);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sumArray(arr, 0, n, 0);
}