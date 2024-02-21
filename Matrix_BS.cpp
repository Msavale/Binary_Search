#include <iostream>

using namespace std;

bool binarySearch(int matrix[][4], int target, int rows, int cols) {
  int low = 0;
  int high = rows - 1;

  while (low <= high) {
    int mid = (low + high) / 2;

    if (matrix[mid][0] <= target && target <= matrix[mid][cols - 1]) {
      // Search the row
      int left = 0;
      int right = cols - 1;

      while (left <= right) {
        int mid = (left + right) / 2;

        if (matrix[mid][cols - 1] == target) {
          return true;
        } else if (matrix[mid][cols - 1] < target) {
          left = mid + 1;
        } else {
          right = mid - 1;
        }
      }

      return false;
    } else if (matrix[mid][0] > target) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }

  return false;
}

int main() {
  int matrix[][4] = {{1, 3, 5, 7},
                      {10, 11, 16, 20},
                      {23, 30, 34, 50}};

  int target = 30;

  if (binarySearch(matrix, target, 3, 4)) {
    cout << "Target found!" << endl;
  } else {
    cout << "Target not found." << endl;
  }

  return 0;
}