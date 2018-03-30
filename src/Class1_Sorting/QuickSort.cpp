class QuickSort {
public:
  void quickSort(int* a, int left, int right) {
    if (left >= right) return;
    int pivot = left + (right - left) / 2;
    swap(a[pivot], a[right]);
    int index = left;
    for (int i = left; i < right; i++) {
      if (a[i] < a[right]) {
        swap(a[index++], a[i]);
      }
    }
    swap(a[index], a[right]);
    quickSort(a, left, index - 1);
    quickSort(a, index + 1, right);
  }

private:
  void swap(int& a, int& b) {
    int tmp = b;
    b = a;
    a = tmp;
  }
};
