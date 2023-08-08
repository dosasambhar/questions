#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int> arr, int target) {
  int s = 0;
  int e = arr.size() - 1;
  
  while (s <= e) {
    int mid = (e+s) / 2;
    
    if (arr[mid] == target) {
      return mid;
    }
    if (mid - 1 >= s && arr[mid - 1] == target) {
      return mid - 1;
    }
    if (mid + 1 <= e && arr[mid + 1] == target) {
      return mid + 1;
    }
    if (arr[mid] > target) {
      e = mid - 2;
    } else {
      s = mid + 2;
    }
  }
  return -1;
}

int main() {
  vector<int> arr{10, 3, 20, 40, 60, 50, 80, 70};
  int target;
  cout << "Enter ";
  cin >> target;
  int ans = bs(arr, target);
  cout << "Index" << ans << endl;

  return 0;
}
