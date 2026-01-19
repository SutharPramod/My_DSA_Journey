# Sort Colors (Sort 0s, 1s, and 2s)

## 📝 Problem Description
Given an array `nums` with `n` objects colored red, white, or blue, sort them **in-place** so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers `0`, `1`, and `2` to represent the color red, white, and blue, respectively.



You must solve this problem without using the library's sort function and in **$O(n)$** time.

---

## 🛠️ Strategy: Dutch National Flag (3-Pointer)
We maintain three pointers to partition the array into four sections:
1.  **`low`**: Everything behind `low` is a `0`.
2.  **`mid`**: Current element being examined. Everything between `low` and `mid` is a `1`.
3.  **`high`**: Everything after `high` is a `2`.

### The Rules:
* If `nums[mid] == 0`: Swap `nums[low]` and `nums[mid]`, increment `low` and `mid`.
* If `nums[mid] == 1`: Just increment `mid`.
* If `nums[mid] == 2`: Swap `nums[mid]` and `nums[high]`, decrement `high`. (Do **not** increment `mid` here because the swapped element from `high` needs to be checked).



---

## 💡 Example

**Input:** `nums = [2,0,2,1,1,0]`

1.  **Start**: `low=0, mid=0, high=5`. `nums[mid]` is `2`. Swap with `high`.
    - `[0,0,2,1,1,2]`, `high=4`.
2.  **Next**: `nums[mid]` is `0`. Swap with `low`.
    - `[0,0,2,1,1,2]`, `low=1, mid=1`.
3.  **Next**: `nums[mid]` is `0`. Swap with `low`.
    - `[0,0,2,1,1,2]`, `low=2, mid=2`.
... (Process continues until `mid > high`)
**Output:** `[0,0,1,1,2,2]`

---

## 📊 Complexity Analysis
| Metric | Complexity | Description |
| :--- | :--- | :--- |
| **Time Complexity** | $O(n)$ | We traverse the array exactly once. |
| **Space Complexity** | $O(1)$ | Sorting is done in-place with no extra arrays. |