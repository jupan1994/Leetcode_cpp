/**
 * Move 0s to the right end of the array, no need to keep the relative
 * order of the elements in the original array.
 * */
#include <vector>
using namespace std;

class MoveZeroI {
public:
  void moveZerosToRightSide(vector<int>& input) {
    if (input.size() <= 1) return;
    int left = 0;
    int right = input.size() - 1;
    while (left <= right) {
      if (input[left] == 0)
        swap(input, left, right--);
      else
        left++;
    }
  }

private:
  void swap(vector<int>& array, int i, int j) {
    int tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
  }
};
