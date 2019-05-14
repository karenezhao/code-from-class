#include "is_odd.h"

bool is_odd(int n) {
    return is_even(n-1);
}