// Recursive method:
class BinarySearch {
public:
  int binarySearch(int* a, int target, int left, int right) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;
    if (a[mid] == target) return mid;
    else if (a[mid] < target) return binarySearch(a, target, mid + 1, right);
    else return binarySearch(a, target, left, mid - 1);
  }
};
