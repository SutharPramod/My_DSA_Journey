# Populating Next Right Pointers in Each Node

## Problem Statement

Given the root of a **perfect binary tree**, populate each node's `next` pointer to point to its next right node. If there is no next right node, the `next` pointer should be set to `NULL`.

Initially, all `next` pointers are set to `NULL`.

A perfect binary tree is a binary tree in which:
- All interior nodes have exactly two children.
- All leaves are at the same level.

## Input

- The first line contains an integer `n`, the number of nodes in the binary tree.
- The second line contains `n` space-separated integers representing the tree in level-order traversal.

## Output

- Print the level-order traversal using `next` pointers.
- Each level should be printed on a new line, and nodes in the same level should be connected using `->`.
- The last node of each level should point to `NULL`.

## Constraints

- `1 ≤ n ≤ 10^5`
- `-10^5 ≤ Node.val ≤ 10^5`
- The given tree is a perfect binary tree.

## Examples

### Example 1


Input:
7
1 2 3 4 5 6 7

Output:
1->NULL
2->3->NULL
4->5->6->7->NULL


### Example 2


Input:
3
1 2 3

Output:
1->NULL
2->3->NULL


### Example 3


Input:
1
1

Output:
1->NULL


## Notes

- You must connect nodes level by level from left to right.
- The solution should ideally use constant extra space (excluding recursion stack).
- The structure of the tree must remain unchanged except for the `next` pointers.