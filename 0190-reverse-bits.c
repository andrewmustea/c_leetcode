/**
 * Reverse bits of a given 32 bits unsigned integer.
 *
 * Constraints:
 *
 * The input must be a binary string of length 32
 *
 * Space: O()
 * Time: O()
*/

#include <stdint.h>

uint32_t reverseBits(uint32_t n) {
    uint32_t ret = 0;

    // for (uint32_t i = 0; i < 32; ++i) {
    //     ret = (ret << 1) + (n & 1);
    //     n >>= 1;
    // }

    uint32_t index = 0;
    while (n) {
        ret = (ret << 1) + (n & 1);
        n >>= 1;
        ++index;
    }

    return ret;
}
