# SortLab — C++ Sorting Algorithms

A menu-driven command-line application built with C++ to practice, implement, and explore fundamental sorting algorithms.

## Features

- **Selection Sort** — selects the minimum or maximum element in each pass.
- **Bubble Sort** — compares and swaps adjacent elements to arrange them in order.
- **Insertion Sort** — inserts each element into its correct position.
- **Merge Sort** — uses recursion and the divide-and-conquer approach to sort an array.
- **Quick Sort** — partitions the array around a pivot and recursively sorts the subarrays.
- **Ascending & Descending Order** — sort elements in either direction.
- **Interactive CLI** — choose a sorting algorithm and provide your own array.
- **Reusable Functions** — use a single sorting function for both ascending and descending order.

## Technologies

- **Language:** C++
- **Standard:** C++17
- **Library:** C++ Standard Library (STL)
- **Data Structure:** `vector`
- **Core Concepts:** Functions, references, recursion, partitioning, and divide and conquer.

## Getting Started

### Prerequisites

- GCC or Clang C++ compiler with C++17 support.
- A terminal or command-line interface.

### Compile

Open a terminal in the project directory and run:

```bash
g++ -std=c++17 SortLab.cpp -o SortLab
```

### Run

**Linux / macOS / Git Bash**

```bash
./SortLab
```

**Windows Command Prompt**

```bash
SortLab.exe
```

## How to Use

1. Run the program.
2. Select a sorting algorithm from the menu.
3. Choose ascending or descending order.
4. Enter the array size.
5. Input the array elements.
6. View the sorted result.

## Sorting Algorithms

| Algorithm | Best Case | Average Case | Worst Case |
|---|---:|---:|---:|
| Selection Sort | O(n²) | O(n²) | O(n²) |
| Bubble Sort* | O(n) | O(n²) | O(n²) |
| Insertion Sort | O(n) | O(n²) | O(n²) |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) |

*Bubble Sort achieves O(n) best-case time only when implemented with an early-exit optimization for an already sorted array.*

## Learning Goals

This project helps me practice:

- Implementing sorting algorithms from scratch.
- Understanding comparisons, swaps, and array traversal.
- Learning recursion and divide and conquer.
- Understanding pivot selection and array partitioning.
- Working with C++ functions, references, and vectors.
- Reducing code duplication through reusable functions.
- Building a menu-driven command-line application.
- Comparing the time complexity of different algorithms.

## Future Improvements

- Add an early-exit optimization to Bubble Sort.
- Count comparisons and swaps.
- Compare sorting performance on different input sizes.
- Improve input validation and error handling.
- Add more sorting algorithms and features.

## Author

**Afraaz**

---

*Built as a hands-on C++ learning project.*
