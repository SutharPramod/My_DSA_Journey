# Lowest Common Ancestor in a Binary Search Tree

## Problem Statement

Given the root of a Binary Search Tree (BST) and two distinct nodes `p` and `q`, find their Lowest Common Ancestor (LCA).

The Lowest Common Ancestor is defined as the lowest node in the tree that has both `p` and `q` as descendants (where a node can be a descendant of itself).

The BST property can be used to efficiently determine the LCA.

## Input

- The first line contains an integer `n`, the number of nodes in the BST.
- The second line contains `n` space-separated integers representing the tree in level-order traversal.
- Use `-1` to represent a null node.
- The third line contains an integer `p`, the value of the first node.
- The fourth line contains an integer `q`, the value of the second node.

## Output

- Print the value of the Lowest Common Ancestor of nodes `p` and `q`.

## Constraints

- `1 ≤ n ≤ 10^5`
- `-10^9 ≤ Node.val ≤ 10^9`
- All node values are unique.
- The input tree is a valid Binary Search Tree.
- `p` and `q` exist in the tree.
- `p ≠ q`

## Examples

### Example 1


Input:
6
6 2 8 0 4 7 9 -1 -1 3 5
2
8

Output:
6


### Example 2


Input:
6
6 2 8 0 4 7 9 -1 -1 3 5
2
4

Output:
2


### Example 3


Input:
3
2 1 3
1
3

Output:
2


## Notes

- In a BST, if both `p` and `q` are smaller than the current node, the LCA lies in the left subtree.
- If both are greater, the LCA lies in the right subtree.
- If one lies on each side, the current node is the LCA.