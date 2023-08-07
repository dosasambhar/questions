#include <iostream>
#include <vector>
using namespace std;

int sqr(vector<int> a, int target) {
    int s = 0;
    int e = a.size() - 1;
    int mid;
    int ans = -1; // Initialize ans to -1

    while (s <= e) {
        mid = s + (e - s) / 2; // To avoid integer overflow

        if (a[mid] * a[mid] == target) {
            return mid;
        } else if (a[mid] * a[mid] < target) {
            ans = mid; // Update the answer to the current index
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans; // Return the updated answer
}

int main() {
    vector<int> a{2, 4, 5, 6, 7, 8, 9, 10};
    int target;
    cout << "Enter a number: ";
    cin >> target;

    int result = sqr(a, target);
    if (result != -1) {
        cout << "Square root index: " << result << endl;
    } else {
        cout << "Square root not found." << endl;
    }
    return 0;
}
