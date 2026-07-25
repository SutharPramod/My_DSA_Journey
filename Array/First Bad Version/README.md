# LeetCode 278. First Bad Version

## Problem Statement
You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

Suppose you have `n` versions `[1, 2, ..., n]` and you want to find out the first bad one, which causes all the subsequent ones to be bad.

You are given an API `bool isBadVersion(version)` which returns whether `version` is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.

## Input
- The first line contains an integer `n`, representing the total number of versions.
- The second line contains an integer `bad`, representing the first defective version.

## Output
- Print a single integer representing the first bad version found.

## Constraints
- `1 <= bad <= n <= 2^31 - 1`

## Examples

### Example 1
Input:
5
4

Output:
4

**Explanation:** - `isBadVersion(3)` -> `false`
- `isBadVersion(5)` -> `true`
- `isBadVersion(4)` -> `true`
The first bad version is 4.

### Example 2
Input:
1
1

Output:
1