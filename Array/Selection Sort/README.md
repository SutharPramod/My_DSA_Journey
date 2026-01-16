# Selection Sort

## 📝 Description
**Selection Sort** is an in-place comparison sorting algorithm. It works by dividing the input list into two parts: a **sorted** sublist (at the beginning) and an **unsorted** sublist. 

The algorithm repeatedly finds the **minimum element** from the unsorted sublist and swaps it with the leftmost unsorted element, effectively moving the unsorted boundary one element to the right.



---

## 🛠️ How it Works (Step-by-Step)
1. Set the first element as the `minimum`.
2. Compare this `minimum` with the rest of the elements in the unsorted part.
3. If a smaller element is found, update the `minimum` to that element's index.
4. After traversing the unsorted part, swap the found `minimum` with the first element of the unsorted part.
5. Repeat for the next index until the entire array is sorted.

---

## 💡 Example

**Input:** `[64, 25, 12, 22, 11]`

1. **Pass 1:** Find min in `[64, 25, 12, 22, 11]`. Min is `11`. Swap with `64`.
   - Result: `[11, 25, 12, 22, 64]`
2. **Pass 2:** Find min in `[25, 12, 22, 64]`. Min is `12`. Swap with `25`.
   - Result: `[11, 12, 25, 22, 64]`
3. **Pass 3:** Find min in `[25, 22, 64]`. Min is `22`. Swap with `25`.
   - Result: `[11, 12, 22, 25, 64]`
4. **Pass 4:** Find min in `[25, 64]`. Min is `25`. No swap needed.
   - Result: `[11, 12, 22, 25, 64]` (Sorted!)



---

## 📊 Complexity Analysis
| Case | Time Complexity | Space Complexity |
| :--- | :--- | :--- |
| **Best Case** | $O(n^2)$ | $O(1)$ |
| **Average Case** | $O(n^2)$ | $O(1)$ |
| **Worst Case** | $O(n^2)$ | $O(1)$ |

> **Note:** Unlike Bubble Sort, Selection Sort's time complexity is always $O(n^2)$ because it must scan the remaining unsorted list to find the minimum, even if the array is already sorted.

---