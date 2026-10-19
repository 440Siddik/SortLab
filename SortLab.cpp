#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

void selectionSortAscending(vector <int> &arr) {
  int n = arr.size();

  // main logic ascending
  for (int i = 0; i < n - 1; ++i) {
    int idx = i;
    for (int j = i + 1; j < n; ++j) {
      if (arr[j] < arr[idx]) {
        idx = j;
      }
    }
    if (idx != i) {
      swap(arr[idx], arr[i]);
    }
  }
}

void selectionSortDescending(vector <int> &arr)
{
    int n = arr.size();
    // main logic descending
    for (int i = 0; i < n - 1; ++i) {
    int idx = i;
    for (int j = i + 1; j < n; ++j) {
      if (arr[j] > arr[idx]) {
        idx = j;
      }
    }
    if (idx != i) {
      swap(arr[idx], arr[i]);
    }
  }
}

int main() {

  int n;
  cout << "Enter Array Size: ";

  cin >> n;
  vector<int> arr(n);
  cout << "Enter elements: ";

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  selectionSortAscending(arr);
  selectionSortDescending(arr);

  cout << "After sorting: ";

  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }

  cout << '\n';
  return 0;
}
