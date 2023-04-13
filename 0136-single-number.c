/**
 * Given a non-empty array of integers nums, every element appears twice except
 * for one. Find that single one.
 *
 * You must implement a solution with a linear runtime complexity and use only
 * constant extra space.
 *
 * Constraints:
 *
 * 1 <= nums.length <= 3 * 10^4
 * -3 * 10^4 <= nums[i] <= 3 * 10^4
 * Each element in the array appears twice except for one element which appears
 * only once.
 *
 * Space: O(1)
 * Time: O(n)
 */

int singleNumber(int *nums, int numsSize){
    int ret = 0;

    for (int i = 0; i < numsSize; ++i)
        ret ^= nums[i];

    return ret;
}
