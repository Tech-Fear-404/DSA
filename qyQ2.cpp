#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int *heights = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    for (int i = 0; i < n - 1; i++) {
        int max_height = heights[i];
        int max_index = i;
        for (int j = i + 1; j < n; j++) {
            if (heights[j] > max_height) {
                max_height = heights[j];
                max_index = j;
            }
        }
        if (max_index != i) {
            swap(heights[i], heights[max_index]);
        }
        cout << "After swapping " << heights[i] << " and " << max_height << ": ";
        for (int k = 0; k < n; k++) {
            cout << heights[k] << " ";
        }
        cout << endl;
    }

    delete[] heights;
    return 0;
}
