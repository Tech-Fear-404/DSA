#include <iostream>
using namespace std;

int findSmallestMissing(int arr[], int size, int x) {
    int left = 0;
    int right = size - 1;
    int smallestMissing = x + 1; // Initialize the smallest missing integer as x + 1

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == smallestMissing) {
            smallestMissing++;
            left = mid + 1; // Continue searching for the smallest missing integer on the right side
        } else if (arr[mid] < smallestMissing) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return smallestMissing;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int smallestMissing = findSmallestMissing(arr, n, x);
    cout << "The smallest missing positive integer greater than " << x << " is " << smallestMissing << ".";

    return 0;
}