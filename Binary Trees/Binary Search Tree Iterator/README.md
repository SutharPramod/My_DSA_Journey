# Binary Search Tree Iterator

## Problem Statement

Implement a Binary Search Tree (BST) iterator that iterates over the nodes of a BST in **ascending order**.

The iterator should support the following operations:

- `BSTIterator(root)` initializes the iterator with the root of the BST.
- `next()` returns the next smallest number in the BST.
- `hasNext()` returns `true` if there exists a next number in the traversal, otherwise `false`.

## Input

- The first line contains an integer `n`, the number of nodes in the BST.
- The second line contains `n` space-separated integers representing the BST in level-order traversal.
- Use `-1` to represent a null node.
- The third line contains an integer `q`, the number of operations.
- The next `q` lines contain operations:
  - `"next"`: call the `next()` function.
  - `"hasNext"`: call the `hasNext()` function.

## Output

- For each `"next"` operation, print the returned value.
- For each `"hasNext"` operation, print `"true"` or `"false"`.

## Constraints

- `1 ≤ n ≤ 10^5`
- `1 ≤ q ≤ 10^5`
- `-10^9 ≤ Node.val ≤ 10^9`
- All node values are unique.
- The input tree is a valid BST.
- All calls to `next()` are valid.

## Examples

### Example 1


Input:
7
7 3 15 -1 -1 9 20
6
hasNext
next
next
hasNext
next
hasNext

Output:
true
3
7
true
9
true


### Example 2


Input:
3
2 1 3
5
next
next
hasNext
next
hasNext

Output:
1
2
true
3
false


### Example 3


Input:
1
1
3
hasNext
next
hasNext

Output:
true
1
false


## Notes

- The iterator should return elements in sorted (ascending) order.
- `hasNext()` should not modify the state of the iterator.
- The implementation should aim for average O(1) time per operation.