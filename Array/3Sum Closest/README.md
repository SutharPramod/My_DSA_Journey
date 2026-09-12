# LeetCode 645. Set Mismatch

## Problem Statement
You have a set of integers which originally contains all the numbers from `1` to `n`. Unfortunately, due to some error, one of the numbers in the set got duplicated to another number in the set, which results in **repetition of one number and loss of another number**.

You are given an integer array `nums` representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array `[duplicate, missing]`.

## Input
- The first line contains an integer `n`, representing the number of elements in `nums`.
- The second line contains `n` space-separated integers representing `nums[]`.

## Output
- Print two space-separated integers representing the duplicate number followed by the missing number.

## Constraints
- `2 <= nums.length <= 10^4`
- `1 <= nums[i] <= 10^4`

## Examples

### Example 1
Input:
4
1 2 2 4

Output:
2 3

**Explanation:** The number `2` is repeated twice and the number `3` is missing.

### Example 2
Input:
2
1 1

Output:
1 2

**Explanation:** The number `1` is repeated twice and the number `2` is missing.