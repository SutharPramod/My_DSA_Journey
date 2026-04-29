# Maximum Sum BST in Binary Tree

## Problem Statement

Given the root of a binary tree, return the maximum sum of all keys of any subtree that is also a Binary Search Tree (BST).

A subtree is defined as any node along with all of its descendants.

A Binary Search Tree (BST) is defined as a binary tree where:
- The left subtree of a node contains only nodes with values strictly less than the node's value.
- The right subtree contains only nodes with values strictly greater than the node's value.
- Both left and right subtrees must also be BSTs.

## Input

- The first line contains an integer `n`, the number of nodes in the binary tree.
- The second line contains `n` space-separated integers representing the tree in level-order traversal.
- Use `-1` to represent a null node.

## Output

- Print a single integer representing the maximum sum of all nodes in any valid BST subtree.

## Constraints

- `1 ≤ n ≤ 10^5`
- `-4 × 10^4 ≤ Node.val ≤ 4 × 10^4`
- The input tree is a valid binary tree.

## Examples

### Example 1


Input:
7
1 4 3 2 4 2 5

Output:
10


### Example 2


Input:
3
4 3 -1 1 2

Output:
2


### Example 3


Input:
3
-4 -2 -5

Output:
0


## Notes

- A subtree with only one node is considered a valid BST.
- If all values are negative, the result can be `0` by choosing an empty subtree.
- The goal is to find the maximum sum among all subtrees that satisfy BST properties.