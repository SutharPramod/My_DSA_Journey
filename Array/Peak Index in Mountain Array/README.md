# Peak Index in a Mountain Array

## Problem Description
An array `arr` is a **mountain** if the following properties hold:
1. `arr.length >= 3`
2. There exists some `i` with `0 < i < arr.length - 1` such that:
   - `arr[0] < arr[1] < ... < arr[i - 1] < arr[i]`
   - `arr[i] > arr[i + 1] > ... > arr[arr.length - 1]`

Given a mountain array `arr`, return the index `i` such that `arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1]`.



You must solve it in **$O(\log(\text{arr.length}))$** time complexity.

---

## Examples

**Example 1:**
> **Input:** `arr = [0,1,0]`  
> **Output:** `1`

**Example 2:**
> **Input:** `arr = [0,2,1,0]`  
> **Output:** `1`

**Example 3:**
> **Input:** `arr = [0,10,5,2]`  
> **Output:** `1`

---

## Constraints
* `3 <= arr.length <= 10^5`
* `0 <= arr[i] <= 10^6`
* `arr` is guaranteed to be a mountain array.

---

## 💡 Key Logic: Binary Search on Trends
Since we need $O(\log n)$ complexity, we use Binary Search. Instead of looking for a specific value, we look at the **slope** or **trend**:

1. Find the `mid` element.
2. If `arr[mid] < arr[mid + 1]`:
   - We are on the **ascending** slope.
   - The peak must be to the right, so `left = mid + 1`.
3. If `arr[mid] > arr[mid + 1]`:
   - We are on the **descending** slope (or at the peak).
   - The peak must be to the left or exactly at `mid`, so `right = mid`.



The loop terminates when `left == right`, pointing to the peak index.