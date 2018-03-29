#include <iostream>
#include "./src/Class1/SelectionSort.cpp"

int main() {
  Solution solution;
  vector<int> tmp;
  tmp.push_back(4);
  tmp.push_back(2);
  tmp.push_back(5);
  tmp.push_back(1);
  tmp.push_back(8);
  tmp.push_back(6);
  solution.selectionSort(tmp);
  for (int i = 0; i < tmp.size(); i++) {
    cout << tmp[i] << " ";
  }
  return 0;
}
