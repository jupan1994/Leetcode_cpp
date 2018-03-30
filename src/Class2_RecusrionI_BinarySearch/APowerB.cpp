/**
 * Assumption: a >= 0
 * */
#include <climits>

class APowerB {
public:
  long power(int a, int b) {
    if (b == 0) return 1;
    if (a == 0) return b > 0 ? 0 : LONG_MAX;
    long half = power(a, b / 2);
    return b % 2 == 0 ? half * half : half * half * a;
  }
};
