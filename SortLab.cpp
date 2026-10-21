#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> inputArray() {
  int n;
  cout << "Enter array size: ";
  cin >> n;

  if (n <= 0) {
    cout << "Array size must be positive!\n";
    return {};
  }

  vector<int> arr(n);

  cout << "Enter elements: ";

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  return arr;
}

void printArray(const vector<int> &arr) {
  cout << "After sorting: ";

  for (int x : arr) {
    cout << x << " ";
  }

  cout << '\n';
}

void selectionSort(vector<int> &arr, bool ascending) {
  int n = arr.size();

  for (int i = 0; i < n - 1; ++i) {
    int idx = i;
    for (int j = i + 1; j < n; ++j) {
      if (ascending? arr[j] < arr[idx] : arr[j] > arr[idx]) {
        idx = j;
      }
    }
    if (idx != i) {
      swap(arr[idx], arr[i]);
    }
  }
}


void bubbleSort(vector<int> &arr, bool ascending) {
  int n = arr.size();

  for (int i = n - 2; i >= 0; --i) {
    for (int j = 0; j <= i; ++j) {
      if (ascending? arr[j] > arr[j + 1] : arr[j] < arr[j+1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}


void insertionSort(vector<int> &arr , bool ascending) {
  int n = arr.size();

  for (int i = 1; i < n; ++i) {
    for (int j = i; j > 0; --j) {
      if (ascending ? arr[j] < arr[j - 1] : arr[j] > arr[j - 1]) {
        swap(arr[j], arr[j - 1]);
      }
      else break;
    }
  }
}


void merge(vector<int> &arr, int start, int mid, int end, bool ascending) {
  vector<int> temp(end - start + 1);
  int left = start, right = mid + 1, index = 0;
  while (left <= mid && right <= end) {
    if (ascending? arr[left] <= arr[right] : arr[left] >= arr[right]) {
      temp[index] = arr[left];
      index++, left++;
    } else {
      temp[index] = arr[right];
      index++, right++;
    }
  }

  while (left <= mid) {
    temp[index] = arr[left];
    index++, left++;
  }

  while (right <= end) {
    temp[index] = arr[right];
    index++, right++;
  }

  index = 0;
  while(start <= end)
  {
    arr[start] = temp[index];
    start++, index++;
  }
}

void mergeSort(vector<int> &arr, int start, int end, bool ascending) {
  if (start >= end)
    return;

  int mid = start + (end - start) / 2;
  mergeSort(arr, start, mid, ascending);
  mergeSort(arr, mid + 1, end, ascending);
  merge(arr, start, mid, end, ascending);
}


int main() {

  int choice;

  cout << "===== SORTLAB =====\n";
  cout << "1. Selection Sort\n";
  cout << "2. Bubble Sort\n";
  cout << "3. Insertion Sort\n";
  cout << "4. Merge Sort\n";
  cout << "0. Exit\n";
  cout << "Enter choice: ";

  cin >> choice;

  if (choice == 0) {
    cout << "Exiting program...\n";
    return 0;
  }

  if (choice < 1 || choice > 4) {
    cout << "Invalid choice!\n";
    return 0;
  }

  int order;

  cout << "\n1. Ascending\n";
  cout << "2. Descending\n";
  cout << "Choose order: ";

  cin >> order;

  if (order != 1 && order != 2) {
    cout << "Invalid order!\n";
    return 0;
  }

  vector<int> arr = inputArray();
  if (arr.empty()) {
    return 0;
  }

  switch (choice) {
  case 1:
      selectionSort(arr , order == 1);
    break;

  case 2:
      bubbleSort(arr, order == 1);
    break;

  case 3:
      insertionSort(arr, order == 1);
    break;

    case 4:
    mergeSort(arr, 0 , arr.size() - 1, order == 1);
    break;
  }

  printArray(arr);

  return 0;
}
