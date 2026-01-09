# Search in Rotated Sorted Array

## Problem Description
There is an integer array `nums` sorted in ascending order (with **distinct** values).

Prior to being passed to your function, `nums` is **possibly rotated** at an unknown pivot index `k` ($1 \le k < \text{nums.length}$) such that the resulting array is `[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]` (**0-indexed**).

> **Example:** `[0,1,2,4,5,6,7]` might be rotated at pivot index 3 and become `[4,5,6,7,0,1,2]`.

Given the array `nums` **after** the possible rotation and an integer `target`, return the *index of `target` if it is in `nums`, or `-1` if it is not in `nums`*.

You must write an algorithm with **$O(\log n)$** runtime complexity.



---

## Examples

**Example 1:**
> **Input:** `nums = [4,5,6,7,0,1,2]`, `target = 0`  
> **Output:** `4`

**Example 2:**
> **Input:** `nums = [4,5,6,7,0,1,2]`, `target = 3`  
> **Output:** `-1`

**Example 3:**
> **Input:** `nums = [1]`, `target = 0`  
> **Output:** `-1`

---

## Constraints
* `1 <= nums.length <= 5000`
* `-10^4 <= nums[i] <= 10^4`
* All values of `nums` are **unique**.
* `nums` is an ascending array that is possibly rotated.
* `-10^4 <= target <= 10^4`

---

## 💡 Key Logic: Modified Binary Search
In a rotated sorted array, at least one half (either `left` to `mid` or `mid` to `right`) is always sorted.

1. Find the `mid` element.
2. If `nums[mid] == target`, return `mid`.
3. **Check which half is sorted:**
   - If `nums[left] <= nums[mid]`, the **left half** is sorted.
     - Check if `target` lies within the left range.
   - Otherwise, the **right half** must be sorted.
     - Check if `target` lies within the right range.