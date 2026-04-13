# Binary Tree Paths

## Problem Statement

Given the root of a binary tree, return all root-to-leaf paths.

A root-to-leaf path is a path starting from the root node and ending at any leaf node. A leaf node is a node that does not have any children.

Each path should be represented as a string of node values separated by `"->"`.

## Input

- The first line contains an integer `n`, the number of nodes in the binary tree.
- The second line contains `n` space-separated integers representing the tree in level-order traversal.
- Use `-1` to represent a null node.

## Output

- Print all root-to-leaf paths, one per line.
- Each path should be in the format: `node1->node2->...->nodeN`.

## Constraints

- `1 ≤ n ≤ 10^5`
- `-10^5 ≤ Node.val ≤ 10^5`
- The input tree is a valid binary tree.

## Examples

### Example 1


Input:
5
1 2 3 -1 5

Output:
1->2->5
1->3


### Example 2


Input:
3
1 2 3

Output:
1->2
1->3


### Example 3


Input:
1
1

Output:
1


## Notes

- The order of output paths does not matter.
- A leaf node is defined as a node with no left and no right child.
- Ensure proper formatting with `"->"` between node values and no trailing symbols.