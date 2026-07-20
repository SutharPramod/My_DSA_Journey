# Subset Sum Problem

## Problem Statement
Given a set of non-negative integers `arr` and a value `target`, determine if there is a subset of the given set with a sum equal to the given `target`. 

A **subset** is a selection of elements from the array (possibly empty) where the order of elements does not matter, and each element can be chosen at most once.

## Input
- The first line contains an integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers representing the elements of `arr`.
- The third line contains an integer `target`.

## Output
- Print `true` if a subset with the given sum exists.
- Print `false` otherwise.

## Constraints
- `1 <= n <= 100`
- `1 <= arr[i] <= 1000`
- `1 <= target <= 10^4`

## Examples

### Example 1
Input:
4
3 34 4 12
9

Output:
true

**Explanation:** There is a subset `[3, 4]` with a sum equal to 7? No, wait—let's look closely at the target 9. The subset `[5, 4]` would equal 9, but 5 isn't in the array. Let's find a valid subset: there isn't one that sums to 9. Let's re-verify:
- Elements available: `3, 34, 4, 12`
- Combinations: `3 + 4 = 7`, `3 + 12 = 15`. No combination sums to 9.
Let's look at another target. If the target was 9, the answer is `false`. Let's use a standard test case where it matches:
Input:
4
3 34 4 12
7

Output:
true

**Explanation:** The subset `[3, 4]` has a sum of `3 + 4 = 7`.

### Example 2
Input:
5
1 2 5 7 8
11

Output:
true

**Explanation:** The subset `[1, 2, 8]` (or `[2, 5, 4]` if available) sums up to 11 (`1 + 2 + 8 = 11`).