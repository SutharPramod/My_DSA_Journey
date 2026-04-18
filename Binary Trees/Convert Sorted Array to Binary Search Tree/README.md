# Convert Sorted Array to Binary Search Tree

## Problem Statement

Given a sorted (in ascending order) integer array `nums`, convert it into a height-balanced Binary Search Tree (BST).

A height-balanced BST is defined as a binary tree in which the depth of the two subtrees of every node never differs by more than one.

## Input

- The first line contains an integer `n`, the number of elements in the array.
- The second line contains `n` space-separated integers representing the sorted array `nums`.

## Output

- Print the level-order traversal of the constructed Binary Search Tree.
- If multiple valid BSTs exist, print any one of them.

## Constraints

- `1 ≤ n ≤ 10^5`
- `-10^5 ≤ nums[i] ≤ 10^5`
- The array `nums` is sorted in strictly increasing order.

## Examples

### Example 1


Input:
5
-10 -3 0 5 9

Output:
0 -10 5 -1 -3 -1 9


### Example 2


Input:
3
1 2 3

Output:
2 1 3


### Example 3


Input:
1
1

Output:
1


## Notes

- The middle element of the array is typically chosen as the root to ensure balance.
- The left subarray forms the left subtree, and the right subarray forms the right subtree.
- The output is expected in level-order traversal format.