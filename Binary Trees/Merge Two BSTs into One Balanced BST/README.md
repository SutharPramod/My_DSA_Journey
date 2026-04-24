# Merge Two BSTs into One Balanced BST

## Problem Statement

Given the roots of two Binary Search Trees (BSTs), merge them into a single **balanced** BST containing all elements from both trees.

The resulting BST must:
- Contain all elements from both input BSTs.
- Maintain the Binary Search Tree property.
- Be height-balanced (the depth of left and right subtrees of every node differs by at most one).

## Input

- The first line contains an integer `n`, the number of nodes in the first BST.
- The second line contains `n` space-separated integers representing the first tree in level-order traversal.
- Use `-1` to represent null nodes.
- The third line contains an integer `m`, the number of nodes in the second BST.
- The fourth line contains `m` space-separated integers representing the second tree in level-order traversal.
- Use `-1` to represent null nodes.

## Output

- Print the level-order traversal of the merged balanced BST.
- If multiple valid BSTs exist, print any one of them.

## Constraints

- `0 ≤ n, m ≤ 10^5`
- `1 ≤ n + m ≤ 2 × 10^5`
- `-10^9 ≤ Node.val ≤ 10^9`
- All node values are unique across both trees.
- Both input trees are valid BSTs.

## Examples

### Example 1


Input:
3
2 1 4
3
1 0 3

Output:
2 1 3 0 -1 -1 4


### Example 2


Input:
2
1 -1 2
2
3 -1 4

Output:
2 1 3 -1 -1 -1 4


### Example 3


Input:
0

3
2 1 3

Output:
2 1 3


## Notes

- The merged BST should include all elements from both trees without duplicates.
- The final tree must be height-balanced.
- Level-order traversal should reflect the structure of the constructed BST.