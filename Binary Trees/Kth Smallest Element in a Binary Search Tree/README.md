# Kth Smallest Element in a Binary Search Tree

## Problem Statement

Given the root of a Binary Search Tree (BST) and an integer `k`, return the `k`th smallest value among all the nodes in the tree.

The BST property ensures that:
- All values in the left subtree are smaller than the root.
- All values in the right subtree are larger than the root.

## Input

- The first line contains an integer `n`, the number of nodes in the BST.
- The second line contains `n` space-separated integers representing the tree in level-order traversal.
- Use `-1` to represent a null node.
- The third line contains an integer `k`.

## Output

- Print a single integer representing the `k`th smallest element in the BST.

## Constraints

- `1 ≤ k ≤ n ≤ 10^5`
- `-10^9 ≤ Node.val ≤ 10^9`
- All node values are unique.
- The input tree is a valid Binary Search Tree.

## Examples

### Example 1


Input:
6
5 3 6 2 4 -1 -1 1
3

Output:
3


### Example 2


Input:
5
3 1 4 -1 2
1

Output:
1


### Example 3


Input:
3
2 1 3
2

Output:
2


## Notes

- Inorder traversal of a BST produces elements in sorted (ascending) order.
- The `k`th smallest element corresponds to the `k`th element in this sorted order.
- Ensure `k` is within the valid range of nodes in the tree.