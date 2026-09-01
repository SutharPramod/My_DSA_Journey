# LeetCode 1460. Make Two Arrays Equal by Reversing Subarrays

## Problem Statement
You are given two integer arrays of equal length `target` and `arr`. In one step, you can select any **non-empty subarray** of `arr` and reverse it. You are```text
# LeetCode 1460. Make Two Arrays Equal by Reversing Subarrays

## Problem Statement
Given two integer arrays of equal length `target` and `arr`, return `true` if you can make `arr` equal to `target` by selecting any non-empty subarray of `arr` and reversing it any number of times, or `false` otherwise.

## Input
- The first line contains an integer `n`, representing the size of `target` and `arr`.
- The second line contains `n` space-separated integers representing `target[]`.
- The third line contains `n` space-separated integers representing `arr[]`.

## Output
- Print `true` if `arr` can be transformed into `target`, or `false` otherwise.

## Constraints
- `target.length == arr.length`
- `1 <= target.length <= 1000`
- `1 <= target[i] <= 1000`
- `1 <= arr[i] <= 1000`

## Examples

### Example 1
Input:
4
1 2 3 4
2 4 1 3

Output:
true

**Explanation:** 
- Reverse subarray `[2, 4, 1]` to get `[1, 4, 2, 3]`.
- Reverse subarray `[4, 2]` to get `[1, 2, 4, 3]`.
- Reverse subarray `[4, 3]` to get `[1, 2, 3, 4]`.
`arr` is now equal to `target`.

### Example 2
Input:
1
7
7

Output:
true

**Explanation:** `arr` is already equal to `target`.

### Example 3
Input:
3
3 7 9
3 7 11

Output:
false

**Explanation:** `arr` does not have `9` and cannot be made equal to `target`.