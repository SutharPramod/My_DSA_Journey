# Kth Largest Element in a Binary Search Tree

## Problem Statement

Given the root of a Binary Search Tree (BST) and an integer `k`, return the `k`th largest value among all the nodes in the tree.

The BST property ensures that:
- All values in the left subtree are smaller than the root.
- All values in the right subtree are larger than the root.

## Input

- The first line contains an integer `n`, the number of nodes in the BST.
- The second line contains `n` space-separated integers representing the tree in level-order traversal.
- Use `-1` to represent a null node.
- The third line contains an integer `k`.

## Output

- Print a single integer representing the `k`th largest element in the BST.

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
2

Output:
5


### Example 2


Input:
5
3 1 4 -1 2
3

Output:
2


### Example 3


Input:
3
2 1 3
1

Output:
3


## Notes

- Reverse inorder traversal (Right → Root → Left) of a BST gives values in descending order.
- The `k`th largest element corresponds to the `k`th element in this descending sequence.
- Ensure `k` is within the valid range of nodes in the tree.