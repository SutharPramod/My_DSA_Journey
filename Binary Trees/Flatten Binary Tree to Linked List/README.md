# Flatten Binary Tree to Linked List

## Problem Statement

Given the root of a binary tree, flatten the tree into a "linked list" in-place.

The "linked list" should use the same `TreeNode` structure where:
- The right child pointer points to the next node in the list.
- The left child pointer is always set to `null`.

The flattened tree should follow the same order as a preorder traversal (Root → Left → Right).

## Input

- The first line contains an integer `n`, the number of nodes in the binary tree.
- The second line contains `n` space-separated integers representing the tree in level-order traversal.
- Use `-1` to represent a null node.

## Output

- Print the flattened tree as space-separated integers following the right pointers.

## Constraints

- `1 ≤ n ≤ 10^5`
- `-10^5 ≤ Node.val ≤ 10^5`
- The input tree is a valid binary tree.

## Examples

### Example 1


Input:
7
1 2 5 3 4 -1 6

Output:
1 2 3 4 5 6


### Example 2


Input:
5
1 2 3 4 -1

Output:
1 2 4 3


### Example 3


Input:
1
1

Output:
1


## Notes

- The transformation must be done in-place without creating new nodes.
- The resulting structure should resemble a singly linked list using right pointers only.
- The order of nodes must match preorder traversal.