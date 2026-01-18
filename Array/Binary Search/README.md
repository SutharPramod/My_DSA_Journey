# Binary Search

## 📝 Description
**Binary Search** is an efficient algorithm for finding an item from a **sorted** list of items. It works by repeatedly dividing in half the portion of the list that could contain the item, until you've narrowed down the possible locations to just one.

---

## 💡 Example

**Input:** `nums = [-1, 0, 3, 5, 9, 12]`, `target = 9`

1. **Initial**: `low = 0`, `high = 5`. `mid = 2` (value = 3).
   - $3 < 9$, so move `low` to `mid + 1` (3).
2. **Step 2**: `low = 3`, `high = 5`. `mid = 4` (value = 9).
   - $9 == 9$, **Target Found!** Return index `4`.

---

## ⚙️ Constraints
* `1 <= nums.length <= 10^4`
* `-10^4 < nums[i], target < 10^4`
* All integers in `nums` are **unique**.
* `nums` is sorted in **ascending** order.

---

## 📊 Complexity Analysis
| Case | Time Complexity | Space Complexity |
| :--- | :--- | :--- |
| **Best Case** | $O(1)$ | $O(1)$ |
| **Average Case** | $O(\log n)$ | $O(1)$ |
| **Worst Case** | $O(\log n)$ | $O(1)$ |

---