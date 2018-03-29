#include <iostream>
#include <vector>

using namespace std;

class SelectionSort {
public:
  void selectionSort(vector<int>& input) {
    if (input.size() == 0) return;
    int len = input.size();
    for (int i = 0; i < len; i++) {
      int min_index = i;
      int min = input[i];
      for (int j = i + 1; j < len; j++) {
        if (input[j] < min) {
          min = input[j];
          min_index = j;
        }
      }
      swap(input[i], input[min_index]);
    }
  }

private:
  void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
  }
};
