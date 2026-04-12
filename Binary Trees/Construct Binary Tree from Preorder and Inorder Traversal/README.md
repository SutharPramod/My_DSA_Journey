# Construct Binary Tree from Preorder and Inorder Traversal

## Problem Statement

Given two integer arrays `preorder` and `inorder` where:

- `preorder` is the preorder traversal of a binary tree (Root → Left → Right)
- `inorder` is the inorder traversal of the same binary tree (Left → Root → Right)

Construct and return the binary tree.

It is guaranteed that the given traversals correspond to a valid binary tree with unique values.

## Input

- The first line contains an integer `n`, the number of nodes in the tree.
- The second line contains `n` space-separated integers representing the `preorder` traversal.
- The third line contains `n` space-separated integers representing the `inorder` traversal.

## Output

- Print the level-order traversal (breadth-first traversal) of the constructed binary tree.
- Use `-1` to represent null nodes where necessary.

## Constraints

- `1 ≤ n ≤ 10^5`
- `-10^9 ≤ Node.val ≤ 10^9`
- All node values are unique.
- Both traversals contain the same set of values.

## Examples

### Example 1


Input:
5
3 9 20 15 7
9 3 15 20 7

Output:
3 9 20 -1 -1 15 7


### Example 2


Input:
3
1 2 3
2 1 3

Output:
1 2 3


### Example 3


Input:
1
1
1

Output:
1


## Notes

- The first element in preorder traversal represents the root of the tree.
- The position of the root in inorder traversal divides the tree into left and right subtrees.
- The output should follow level-order traversal format.