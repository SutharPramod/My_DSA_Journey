# LeetCode 154. Find Minimum in Rotated Sorted Array II

## Problem Statement
Suppose an array of length `n` sorted in ascending order is rotated between `1` and `n` times.

Notice that the array may contain **duplicates**.

Given the sorted rotated array `nums` that may contain duplicates, return the **minimum element** of this array.

You must decrease the overall operation steps as much as possible.

## Input
- The first line contains an integer `n`, representing the number of elements in `nums`.
- The second line contains `n` space-separated integers representing `nums[]`.

## Output
- Print a single integer representing the minimum element in the rotated sorted array.

## Constraints
- `n == nums.length`
- `1 <= n <= 5000`
- `-5000 <= nums[i] <= 5000`
- `nums` is sorted and rotated between `1` and `n` times.

## Examples

### Example 1
Input:
5
1 3 5

Output:
1

**Explanation:** The original array was `[1, 3, 5]` and was not rotated (or rotated 3 times). The minimum element is `1`.

### Example 2
Input:
5
2 2 2 0 1

Output:
0

**Explanation:** The original array was `[0, 1, 2, 2, 2]` and was rotated 3 times to become `[2, 2, 2, 0, 1]`. The minimum element is `0`.

### Example 3
Input:
7
10 1 10 10 10 10 10

Output:
1

**Explanation:** Due to duplicates, `10` appears multiple times across both halves. The minimum element is `1`.

## Notes
- **The Core Strategy:** Modified **Binary Search** to locate the pivot point where the rotation occurs.
  - In a standard rotated sorted array without duplicates (LeetCode 153), we compare `nums[mid]` with `nums[high]`.
  - When duplicates are present, `nums[mid]` can equal `nums[high]`, making it impossible to determine which side of `mid` contains the minimum element.

- **Handling the Three Comparison Cases:**
  1. `nums[mid] < nums[high]`:
     - The right half `[mid, high]` is sorted in increasing order.
     - The minimum element must lie in the left half, including `mid` itself.
     - Set `high = mid`.
  2. `nums[mid] > nums[high]`:
     - The pivot (minimum) lies in the right half `[mid + 1, high]`.
     - Set `low = mid + 1`.
  3. `nums[mid] == nums[high]`:
     - We cannot determine which side is sorted (e.g., `[1, 0, 1, 1, 1]` vs `[1, 1, 1, 0, 1]`).
     - However, since `nums[mid]` equals `nums[high]`, removing `nums[high]` will not lose the minimum element.
     - Safely shrink the search space from the right: `high--`.

- **Algorithm Steps:**
  1. Initialize `low = 0` and `high = nums.length - 1`.
  2. While `low < high`:
      - Compute `mid = low + (high - low) / 2`.
      - If `nums[mid] < nums[high]`: `high = mid`.
      - Else if `nums[mid] > nums[high]`: `low = mid + 1`.
      - Else (`nums[mid] == nums[high]`): `high--`.
  3. Return `nums[low]`.

- **Complexity:**
  - **Time Complexity:** 
    - **Average Case:** $O(\log n)$ when elements are mostly distinct.
    - **Worst Case:** $O(n)$ when all elements in the array are identical (e.g., `[1, 1, 1, 1, 1]`), forcing `high--` step by step.
  - **Space Complexity:** $O(1)$ auxiliary space as the search is performed in-place using two pointers.