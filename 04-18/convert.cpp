#include "convert.h"

string convert_to_base(int n, int base) {
    string res = "";

    if (n == 0) {
        return "0";
    }

    // while the number n is not 0
    while (n != 0) {
        // mod by the base to get the current rightmost digit
        int digit = n % base;

        // make n smaller by dividing by the base
        n = n / base;

        // add the current digit to my result string
            // involves converting that digit to a character
        char digit_as_char;
        if (digit >= 0 && digit <= 9) {
            digit_as_char = '0' + digit;
        } else {
            // need to start from 'A'
            digit_as_char = 'A' + (digit - 10);
        }

        res = digit_as_char + res;
    }

    return res;
}