#include <iostream>
#include <vector>

#include "src/Class1_Sorting/RainbowSort.cpp"

using namespace std;

int main() {
 // int a[] = {1, 2, 3, 4, 5, 6};
  vector<int> a;
  a.push_back(1);
  a.push_back(2);
  a.push_back(0);
  a.push_back(0);
  a.push_back(1);
  a.push_back(1);

  RainbowSort rs;
  rs.rainbowSort(a);
  for (int i = 0; i < 6; i++) {
    cout << a[i] << " ";
  }
  return 0;
}
