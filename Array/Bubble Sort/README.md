# Bubble Sort

## 📝 Description
**Bubble Sort** is a simple comparison-based sorting algorithm. It works by repeatedly stepping through the list, comparing adjacent elements, and **swapping** them if they are in the wrong order. 

The pass through the list is repeated until the list is sorted. The algorithm gets its name because smaller elements "bubble" to the top of the list.



---

## 🛠️ How it Works (Step-by-Step)
1. Start at the beginning of the array.
2. Compare the first two elements. If the first is greater than the second, swap them.
3. Move to the next pair and repeat until the end of the array. (At this point, the largest element has "bubbled" to the last position).
4. Repeat the process for all elements, excluding the ones already sorted at the end.

---

## 💡 Example

**Input:** `[5, 1, 4, 2, 8]`

**First Pass:**
1. (`5`, `1`, 4, 2, 8) → (`1`, `5`, 4, 2, 8) : Swap since 5 > 1
2. (1, `5`, `4`, 2, 8) → (1, `4`, `5`, 2, 8) : Swap since 5 > 4
3. (1, 4, `5`, `2`, 8) → (1, 4, `2`, `5`, 8) : Swap since 5 > 2
4. (1, 4, 2, `5`, `8`) → (1, 4, 2, `5`, `8`) : No swap since 5 < 8

**Second Pass:**
1. (`1`, `4`, 2, 5, 8) → (`1`, `4`, 2, 5, 8) : No swap
2. (1, `4`, `2`, 5, 8) → (1, `2`, `4`, 5, 8) : Swap since 4 > 2
...and so on until sorted.

---

## 📊 Complexity Analysis
| Case | Time Complexity | Space Complexity |
| :--- | :--- | :--- |
| **Best Case** | $O(n)$ (Optimized with a flag) | $O(1)$ |
| **Average Case** | $O(n^2)$ | $O(1)$ |
| **Worst Case** | $O(n^2)$ | $O(1)$ |

---