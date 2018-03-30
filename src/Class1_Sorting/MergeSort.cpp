class MergeSort {
public:
  void mergesort(int* a, int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergesort(a, left, mid);
    mergesort(a, mid + 1, right);
    merge(a, left, right, mid);
  }

private:
  void merge(int* a, int left, int right, int mid) {
    int sorted[right - left + 1];
    int i = left, j = mid + 1;
    int index = 0;
    while (i <= mid && j <= right) {
      if (a[i] < a[j])
        sorted[index++] = a[i++];
      else
        sorted[index++] = a[j++];
    }
    while (i <= mid)
      sorted[index++] = a[i++];
    while (j <= right)
      sorted[index++] = a[j++];
    for (int k = left, q = 0; k <= right; k++, q++)
      a[k] = sorted[q];
  }
};
