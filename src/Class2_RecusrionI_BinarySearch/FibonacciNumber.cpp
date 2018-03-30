class FibonacciNumber {
public:
  // Recursive method: O(1) space, O(2^n) time
  int fiboRecursion(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fiboRecursion(n - 1) + fiboRecursion(n - 2);
  }

  // Iterative method: O(1) space, O(n) time
  int fiboIteration(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int prev = 1;
    int prev_prev = 0;
    int res = 0;
    for (int i = 2; i <= n; i++) {
      res = prev + prev_prev;
      prev_prev = prev;
      prev = res;
    }
    return res;
  }
};
