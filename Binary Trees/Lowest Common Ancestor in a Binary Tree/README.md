# Lowest Common Ancestor in a Binary Tree

## Problem Statement

Given the root of a binary tree and two distinct nodes `p` and `q`, find their Lowest Common Ancestor (LCA).

The Lowest Common Ancestor of two nodes is defined as the lowest node in the tree that has both `p` and `q` as descendants (where a node can be a descendant of itself).

## Input

- The first line contains an integer `n`, the number of nodes in the binary tree.
- The second line contains `n` space-separated values representing the tree in level-order traversal. Use `-1` to represent a null node.
- The third line contains an integer `p`, the value of the first node.
- The fourth line contains an integer `q`, the value of the second node.

## Output

- Print the value of the Lowest Common Ancestor of nodes `p` and `q`.

## Constraints

- `1 ≤ n ≤ 10^5`
- `-10^9 ≤ Node.val ≤ 10^9`
- All node values are unique.
- `p` and `q` exist in the tree.
- `p ≠ q`

## Examples

### Example 1


Input:
7
3 5 1 6 2 0 8
5
1

Output:
3


### Example 2


Input:
7
3 5 1 6 2 0 8
5
4

Output:
5


### Example 3


Input:
5
1 2 3 -1 -1 4 5
4
5

Output:
3


## Notes

- The tree is not necessarily a Binary Search Tree.
- The LCA is the deepest node that appears as an ancestor of both `p` and `q`.
- A node is considered an ancestor of itself.