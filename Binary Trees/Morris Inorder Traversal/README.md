# Morris Inorder Traversal

## Problem Statement

Given the root of a binary tree, perform the inorder traversal of the tree **without using recursion or a stack**.

Return the inorder traversal as a sequence of node values.

Morris Traversal is a technique that allows traversal of a binary tree using O(1) extra space by temporarily modifying the tree structure.

## Input

- The first line contains an integer `n`, the number of nodes in the binary tree.
- The second line contains `n` space-separated integers representing the tree in level-order traversal.
- Use `-1` to represent a null node.

## Output

- Print the inorder traversal of the binary tree as space-separated integers.

## Constraints

- `1 ≤ n ≤ 10^5`
- `-10^5 ≤ Node.val ≤ 10^5`
- The input tree is a valid binary tree.

## Examples

### Example 1


Input:
5
1 -1 2 3

Output:
1 3 2


### Example 2


Input:
3
2 1 3

Output:
1 2 3


### Example 3


Input:
1
1

Output:
1


## Notes

- Inorder traversal follows the order: Left → Root → Right.
- The traversal must be performed without using recursion or any auxiliary stack.
- Morris Traversal achieves O(1) extra space by creating temporary links (threads) in the tree.
- The original tree structure should remain unchanged after traversal.