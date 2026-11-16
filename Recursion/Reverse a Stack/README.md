# LeetCode. Reverse a Stack
## Problem Statement
Reverse a given stack of integers using recursion, without using any extra data structures (like another stack or queue). The only allowed operations on the stack are `push`, `pop`, `top` (or `peek`), and `empty` (or `isEmpty`).

## Input
A reference to a `std::stack<int>` containing the elements to be reversed.

## Output
The stack is reversed in place.

## Constraints
- $0 \le \text{size of stack} \le 10^4$
- $-10^9 \le \text{stack element values} \le 10^9$

## Examples
### Example 1
Input: Stack = [1, 2, 3, 4, 5] (where 5 is at the top)
Output: Stack = [5, 4, 3, 2, 1] (where 1 is at the top)
**Explanation:** The elements of the stack are reversed recursively. The original top element (5) goes to the bottom, and the original bottom element (1) comes to the top.