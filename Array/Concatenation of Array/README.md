# Concatenation of Array## Problem StatementGiven an integer array `nums` of length `n`, create a new array `ans` of length `2n` such that:- `ans[i] = nums[i]` for `0 ≤ i < n`- `ans[i + n] = nums[i]` for `0 ≤ i < n`Return the concatenated array.## Input- The first line contains an integer `n`, the size of the array.- The second line contains `n` space-separated integers representing the array `nums`.## Output- Print the concatenated array `ans` as space-separated integers.## Constraints- `1 ≤ n ≤ 1000`- `1 ≤ nums[i] ≤ 1000`## Examples### Example 1
Input:
3
1 2 1
Output:
1 2 1 1 2 1
### Example 2
Input:
4
1 3 2 1
Output:
1 3 2 1 1 3 2 1
### Example 3
Input:
1
7
Output:
7 7
## Notes- The resulting array contains two consecutive copies of the original array.- The relative order of elements must remain unchanged.- The size of the output array will always be `2 × n`.