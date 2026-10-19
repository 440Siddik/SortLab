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

void selectionSortAscending(vector<int> &arr) {
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

void selectionSortDescending(vector<int> &arr) {
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

  int choice;

  cout << "1. Selection Sort\n";
  cout << "2. Bubble Sort\n";
  cout << "3. Insertion Sort\n";
  cout << "0. Exit\n";

  cout << "Enter Choice: ";
  cin >> choice;

  switch (choice) {
  case 1: {
    int order;

    cout << "\n1. Ascending Order\n";
    cout << "\n2. Descending Order\n";
    cout << "Choose Order: ";
    cin >> order;

    if (order != 1 && order != 2) {
      cout << "Invalid Order!\n";
      break;
    }

    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) {
      cout << "Array size must be positive!\n";
      break;
    }

    vector<int> arr(n);

    cout << "Enter elements: ";

    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
    }

    if (order == 1) {
      selectionSortAscending(arr);
    } else {
      selectionSortDescending(arr);
    }

    cout << "After sorting: ";
    for (int i = 0; i < n; ++i) {
      cout << arr[i] << " ";
    }

    cout << '\n';
    break;
  }

  case 2: {
  }
  case 3: {
  }
  case 0:
    cout << "Exiting Program.....\n";
    break;
  default:
    cout << "Invalid Choice!\n";
  }

  return 0;
}
