# LeetCode 1122. Relative Sort Array

## Problem Statement
Given two arrays `arr1` and `arr2`, the elements of `arr2` are distinct, and all elements in `arr2` are also in `arr1`.

Sort the elements of `arr1` such that the relative ordering of items in `arr1` are the same as in `arr2`. Elements that do not appear in `arr2` should be placed at the end of `arr1` in **ascending order**.

## Input
- The first line contains an integer `n1`, representing the size of `arr1`.
- The second line contains `n1` space-separated integers representing `arr1[]`.
- The third line contains an integer `n2`, representing the size of `arr2`.
- The fourth line contains `n2` space-separated integers representing `arr2[]`.

## Output
- Print `n1` space-separated integers representing the relatively sorted array.

## Constraints
- `1 <= arr1.length, arr2.length <= 1000`
- `0 <= arr1[i], arr2[i] <= 1000`
- All elements of `arr2` are **distinct**.
- Each `arr2[i]` is in `arr1`.

## Examples

### Example 1
Input:
11
2 3 1 3 2 4 6 7 9 2 19
6
2 1 4 3 9 6

Output:
2 2 2 1 4 3 3 9 6 7 19

**Explanation:**
- First, place all occurrences of numbers from `arr2` in the exact order they appear: `2` (three times), `1` (once), `4` (once), `3` (twice), `9` (once), `6` (once).
- Remaining numbers not in `arr2` are `7` and `19`. Append them in ascending order: `7, 19`.

### Example 2
Input:
6
28 6 22 8 44 17
4
22 28 8 6

Output:
22 28 8 6 17 44

**Explanation:**
- Numbers present in `arr2`: `22, 28, 8, 6`.
- Remaining numbers sorted in ascending order: `17, 44`.