#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, -3, 4, -6};
    int n = 5;

    int start = 0;
    int end = n - 1;

    for (int i = 0; i <= end;) {
        if (a[i] < 0) {
            swap(a[start], a[i]);
            start++;
            i++;
        } else {
            swap(a[end], a[i]);
            end--;
        }
    }

    // Print array
    for (int j = 0; j < n; j++) {
        cout << a[j] << " ";
    }

    return 0;
}
