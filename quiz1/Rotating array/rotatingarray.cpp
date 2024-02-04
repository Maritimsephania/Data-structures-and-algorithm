#include <iostream>
using namespace std;

void rotate_array_right(int arr[], int n, int d) {
    k = d % n; // adjust d if it's greater than n
    int temp[k];
    for(int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for(int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    for(int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int d = 2;
    rotate_array_right(arr, n, d);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}