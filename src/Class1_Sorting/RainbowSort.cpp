/**
 * An array has three possible values: 0, 1, 2. Sort it in ascending order
 * and such that all 0s are together, all 1s are together, and all 2s
 * are together.
 * */
#include <vector>
using namespace std;

class RainbowSort {
public:
  void rainbowSort(vector<int>& a) {
    int index0 = 0;
    int index1 = 0;
    int index2 = a.size() - 1;
    while (index0 <= index2) {
      if (a[index0] == 2) {
        a[index0] = a[index2];
        a[index2--] = 2;
      } else if (a[index0] == 0) {
        swap(a, index0++, index1++);
      } else if (a[index0] == 1) {
        index0++;
      }
    }
  }

private:
  void swap(vector<int>& a, int i, int j) {
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
  }
};

