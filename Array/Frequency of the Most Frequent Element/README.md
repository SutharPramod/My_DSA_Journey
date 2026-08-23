# LeetCode 1838. Frequency of the Most Frequent Element

## Problem Statement
The frequency of an element is the number of times it occurs in an array.

You are given an integer array `nums` and an integer `k`. In one operation, you can choose an index of `nums` and increment the element at that index by `1`.

Return the **maximum possible frequency** of an element after performing at most `k` operations.

## Input
- The first line contains an integer `n`, representing the number of elements in `nums`.
- The second line contains `n` space-separated integers representing `nums[]`.
- The third line contains an integer `k`.

## Output
- Print a single integer representing the maximum possible frequency of an element.

## Constraints
- `1 <= nums.length <= 10^5`
- `1 <= nums[i] <= 10^5`
- `1 <= k <= 10^5`

## Examples

### Example 1
Input:
3
1 2 4
5

Output:
3

**Explanation:** Increment `1` three times to make it `4`, and increment `2` two times to make it `4`. 
The array becomes `[4, 4, 4]`. Total operations used = $3 + 2 = 5 \le 5$. The maximum frequency of `4` is 3.

### Example 2
Input:
4
1 4 8 13
5

Output:
2

**Explanation:** There are multiple ways to achieve a frequency of 2:
- Increment `1` three times to get `[4, 4, 8, 13]` (3 operations used).
- Increment `4` four times to get `[1, 8, 8, 13]` (4 operations used).
- Increment `8` five times to get `[1, 4, 13, 13]` (5 operations used).
Maximum frequency achieved is 2.

### Example 3
Input:
3
3 9 6
2

Output:
1

**Explanation:** `k = 2` is not enough operations to make any two elements equal. The maximum frequency remains 1.