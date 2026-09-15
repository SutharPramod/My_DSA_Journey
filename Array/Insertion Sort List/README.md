# LeetCode 147. Insertion Sort List

## Problem Statement
Given the `head` of a singly linked list, sort the list using **insertion sort**, and return the sorted list's head.

The steps of the insertion sort algorithm for a linked list:
1. Insertion sort iterates, consuming one input element each repetition and growing a sorted output list.
2. At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list, and inserts it there.
3. It repeats until no input elements remain.

## Input
- The first line contains an integer `n`, representing the number of nodes in the linked list.
- The second line contains `n` space-separated integers representing the values of the nodes in sequence.

## Output
- Print `n` space-separated integers representing the node values of the sorted linked list.

## Constraints
- The number of nodes in the list is in the range `[1, 5000]`.
- `-5000 <= Node.val <= 5000`

## Examples

### Example 1
Input:
4
4 2 1 3

Output:
1 2 3 4

**Explanation:** 
- Start with sorted list: `[4]`
- Insert `2`: `[2, 4]`
- Insert `1`: `[1, 2, 4]`
- Insert `3`: `[1, 2, 3, 4]`

### Example 2
Input:
5
-1 5 3 4 0

Output:
-1 0 3 4 5

**Explanation:**
- Node values are rearranged into sorted order: `[-1, 0, 3, 4, 5]`.

## Notes
- **The Core Strategy:** **Dummy Head Pointer + Sublist Insertion**.
  - Unlike an array where shifting elements requires backward indexing, a singly linked list can only be traversed forward.
  - Maintain a separate sorted region anchored by a `dummy` node (`dummy -> sorted_list`).
  - Maintain a pointer `curr` representing the current element to be inserted into the sorted list.
  - For each `curr` node, search from `dummy` to find the correct position where `prev.val <= curr.val < prev.next.val`, then rewire pointers to insert `curr`.