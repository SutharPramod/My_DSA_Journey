# Construct Binary Search Tree from Preorder Traversal

## Problem Statement

Given an integer array `preorder` representing the preorder traversal (Root → Left → Right) of a Binary Search Tree (BST), construct and return the BST.

It is guaranteed that the given preorder traversal corresponds to a valid BST with unique values.

## Input

- The first line contains an integer `n`, the number of nodes in the BST.
- The second line contains `n` space-separated integers representing the preorder traversal.

## Output

- Print the level-order traversal of the constructed BST.
- Use `-1` to represent null nodes where necessary.

## Constraints

- `1 ≤ n ≤ 10^5`
- `-10^9 ≤ preorder[i] ≤ 10^9`
- All values in `preorder` are unique.
- The given preorder traversal is valid for a BST.

## Examples

### Example 1


Input:
6
8 5 1 7 10 12

Output:
8 5 10 1 7 -1 12


### Example 2


Input:
3
2 1 3

Output:
2 1 3


### Example 3


Input:
1
1

Output:
1


## Notes

- The first element of preorder traversal is always the root of the BST.
- Values smaller than the root form the left subtree, and values greater form the right subtree.
- The constructed tree must satisfy all BST properties.