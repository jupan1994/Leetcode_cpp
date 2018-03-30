/**
 * Given an array of element, reorder it as in this example:
 * N1, N2, N3, ..., N2k --> N1, Nk+1, N2, Nk+2, N3, Nk+3, ..., Nk, N2k
 * N1, N2, N3, ..., N2k+1 --> N1, Nk+1, N2, Nk+2, N3, Nk+3, ..., Nk, N2k, N2k+1
 * Example:
 * {A, B, C, 1, 2, 3} --> {A, 1, B, 2, C, 3, D, 4}
 * {A, B, C, 1, 2, 3, 4} --> {A, 1, B, 2, C, 3, 4}
 * */
#include <vector>
using namespace std;

class ReorderArray {
public:
  void reorder(vector<int>& array) {
    if (array.size() % 2 == 0)
      reorderHelper(array, 0, array.size() - 1);
    else
      reorderHelper(array, 0, array.size() - 2);
  }

private:
  void reorderHelper(vector<int>& array, int left, int right) {
    int length = right - left + 1;
    if (length <= 2) return;

    int mid = left + length / 2;
    int left_mid = left + length / 4;
    int right_mid = left + length * 3 / 4;

    reverse(array, left_mid, mid - 1);
    reverse(array, mid, right_mid - 1);
    reverse(array, left_mid, right_mid - 1);

    reorderHelper(array, left, left + (left_mid - left) * 2 - 1);
    reorderHelper(array, left + (left_mid - left) * 2, right);
  }

  void reverse(vector<int>& array, int left, int right) {
    int tmp = array[left];
    array[left] = array[right];
    array[right] = tmp;
  }
};
