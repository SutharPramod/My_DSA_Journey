# LeetCode 1502. Can Make Arithmetic Progression From Sequence

## Problem Statement
A sequence of numbers is called an **arithmetic progression** if the difference between any two consecutive elements is the same.

Given an array of numbers `arr`, return `true` if the array can be rearranged to form an **arithmetic progression**, otherwise return `false`.

## Input
- The first line contains an integer `n`, representing the number of elements in `arr`.
- The second line contains `n` space-separated integers representing `arr[]`.

## Output
- Print `true` if an arithmetic progression can be formed, or `false` otherwise.

## Constraints
- `2 <= arr.length <= 1000`
- `-10^6 <= arr[i] <= 10^6`

## Examples

### Example 1
Input:
3
3 5 1

Output:
true

**Explanation:** We can reorder the elements as `[1, 3, 5]` or `[5, 3, 1]` with differences `2` and `-2` respectively, which are arithmetic progressions.

### Example 2
Input:
3
1 2 4

Output:
false

**Explanation:** There is no way to reorder the elements to obtain an arithmetic progression.