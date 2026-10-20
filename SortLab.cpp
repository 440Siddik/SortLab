#include <iostream>
#include <vector>
#include <algorithm>

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

void selectionSortAscending(vector<int> &arr) {
  int n = arr.size();

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

void bubbleSortAscending(vector<int> &arr) {
  int n = arr.size();

  for (int i = n - 2; i >= 0; --i) {
    for (int j = 0; j <= i; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
      else{
        break;
      }
    }
  }
}

void bubbleSortDescending(vector<int> &arr) {
  int n = arr.size();

  for (int i = n - 2; i >= 0; --i) {
    for (int j = 0; j <= i; ++j) {
      if (arr[j] < arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
      else{
        break;
      }
    }
  }
}

void insertionSortAscending(vector<int> &arr) {
  int n = arr.size();

  for (int i = 1; i < n; ++i) {
    for (int j = i; j > 0; --j) {
      if (arr[j] < arr[j - 1]) {
        swap(arr[j], arr[j - 1]);
      } else {
        break;
      }
    }
  }
}

void insertionSortDescending(vector<int> &arr) {
  int n = arr.size();

  for (int i = 1; i < n; ++i) {
    for (int j = i; j > 0; --j) {
      if (arr[j] > arr[j - 1]) {
        swap(arr[j], arr[j - 1]);
      } else {
        break;
      }
    }
  }
}

void mergeSortAscending(vector <int> &arr)
{

}

void mergeSortDescending(vector <int> &arr)
{

}

int main() {

  int choice;

  cout << "===== SORTLAB =====\n";
  cout << "1. Selection Sort\n";
  cout << "2. Bubble Sort\n";
  cout << "3. Insertion Sort\n";
  cout << "0. Exit\n";
  cout << "Enter choice: ";

  cin >> choice;

  if (choice == 0) {
    cout << "Exiting program...\n";
    return 0;
  }

  if (choice < 1 || choice > 3) {
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
   if (arr.empty())
    {
        return 0;
    }

   switch (choice)
    {
        case 1:
            if (order == 1)
                selectionSortAscending(arr);
            else
                selectionSortDescending(arr);
            break;

        case 2:
            if (order == 1)
                bubbleSortAscending(arr);
            else
                bubbleSortDescending(arr);
            break;

        case 3:
            if (order == 1)
                insertionSortAscending(arr);
            else
                insertionSortDescending(arr);
            break;
    }

    printArray(arr);

    return 0;
}
