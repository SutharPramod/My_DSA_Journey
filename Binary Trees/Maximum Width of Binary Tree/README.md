# Maximum Width of Binary Tree

## Problem Statement

Given the root of a binary tree, return the maximum width of the tree.

The width of a level is defined as the length between the leftmost and rightmost non-null nodes at that level, including the null nodes in between that would exist in a complete binary tree structure.

## Input

- The first line contains an integer `n`, the number of nodes in the binary tree.
- The second line contains `n` space-separated integers representing the tree in level-order traversal.
- Use `-1` to represent a null node.

## Output

- Print a single integer representing the maximum width of the binary tree.

## Constraints

- `1 ≤ n ≤ 10^5`
- `-10^5 ≤ Node.val ≤ 10^5`
- The input tree is a valid binary tree.

## Examples

### Example 1


Input:
7
1 3 2 5 3 -1 9

Output:
4


### Example 2


Input:
7
1 3 2 5 -1 -1 9

Output:
4


### Example 3


Input:
5
1 3 2 5 -1

Output:
2


## Notes

- The width calculation considers the positions of nodes as if the tree were a complete binary tree.
- Null nodes between existing nodes are counted when determining width.
- The answer may be large, so consider handling large indices carefully.