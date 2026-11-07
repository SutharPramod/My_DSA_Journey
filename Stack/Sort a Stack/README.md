# LeetCode. Sort a Stack

## Problem Statement
Given a stack, the task is to sort it such that the top of the stack has the greatest element. You are not allowed to use any loop constructs. You can only use standard stack operations: `push`, `pop`, `peek`/`top`, `isEmpty`, and recursion.

## Input
A stack of integers.

## Output
The same stack sorted in descending order from bottom to top (meaning the maximum element is at the top), or returned/modified appropriately.

## Constraints
- The number of elements in the stack is in the range $[1, 200]$.
- $-10^4 \le \text{node.val} \le 10^4$

## Examples
### Example 1
Input: Stack: [34, 3, 31, 98, 92, 23] (top is 23)
Output: Stack: [3, 23, 31, 34, 92, 98] (top is 98)
**Explanation:** After sorting the stack, the maximum element is at the top.