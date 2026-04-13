# Transform to Sum Tree

## Problem Statement

Given the root of a binary tree, transform the tree into a **Sum Tree**.

A Sum Tree is a binary tree where the value of each node is replaced by the sum of the values of its left and right subtrees in the original tree.

- The value of a leaf node is replaced with `0`.
- The structure of the tree should remain unchanged.

## Input

- The first line contains an integer `n`, the number of nodes in the binary tree.
- The second line contains `n` space-separated integers representing the tree in level-order traversal.
- Use `-1` to represent a null node.

## Output

- Print the level-order traversal of the transformed Sum Tree.

## Constraints

- `1 ≤ n ≤ 10^5`
- `-10^5 ≤ Node.val ≤ 10^5`
- The input tree is a valid binary tree.

## Examples

### Example 1


Input:
7
10 -2 6 8 -4 7 5

Output:
20 4 12 0 0 0 0


### Example 2


Input:
3
1 2 3

Output:
5 0 0


### Example 3


Input:
5
5 3 7 1 2

Output:
13 3 0 0 0


## Notes

- Each node’s new value is the sum of values of nodes in its left and right subtrees from the original tree.
- Leaf nodes always become `0` in the transformed tree.
- The transformation must be done in-place without changing the tree structure.