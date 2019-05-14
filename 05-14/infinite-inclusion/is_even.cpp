#include "is_even.h"

bool is_even(int n) {
    if (n == 0) return true;
    else return is_odd(n-1);
}