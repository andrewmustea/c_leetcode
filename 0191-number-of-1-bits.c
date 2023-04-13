/**
 * Write a function that takes an unsigned integer and returns the number of '1'
 * bits it has (also known as the Hamming weight).
 *
 * Constraints:
 *
 * The input must be a binary string of length 32.
 *
 * Space: O(1)
 * Time: O(1)
 */

#include <stdint.h>

int hammingWeight(uint32_t n) {
    int ret = 0;

    for (int i = 0; i < 32; ++i)
        ret += (n >> i) & 1;

    return ret;
}
