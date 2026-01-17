# Insertion Sort

## 📝 Description
**Insertion Sort** is a simple sorting algorithm that builds the final sorted array one item at a time. It is much like the way you sort playing cards in your hands: you pick a card and "insert" it into its correct position relative to the cards you already hold.



---

## 🛠️ How it Works (Step-by-Step)
1. Assume the first element is already sorted.
2. Pick the next element (the `key`).
3. Compare the `key` with all elements in the sorted sub-array (to its left).
4. Shift all elements that are greater than the `key` to the right by one position.
5. Insert the `key` into its correct slot.
6. Repeat until the entire array is processed.

---

## 💡 Example

**Input:** `[12, 11, 13, 5, 6]`

1. **First element (12)**: Considered sorted.
2. **Key = 11**: Compare with 12. Since 11 < 12, move 12 to the right and insert 11.
   - Result: `[11, 12, 13, 5, 6]`
3. **Key = 13**: Compare with 11 and 12. 13 is greater, so keep it there.
   - Result: `[11, 12, 13, 5, 6]`
4. **Key = 5**: Compare with 13, 12, 11. Move all to the right and insert 5 at the start.
   - Result: `[5, 11, 12, 13, 6]`
5. **Key = 6**: Compare with 13, 12, 11, 5. Move 13, 12, 11 to the right and insert 6 after 5.
   - Result: `[5, 6, 11, 12, 13]` (Sorted!)



---

## 📊 Complexity Analysis
| Case | Time Complexity | Space Complexity |
| :--- | :--- | :--- |
| **Best Case** | $O(n)$ (When already sorted) | $O(1)$ |
| **Average Case** | $O(n^2)$ | $O(1)$ |
| **Worst Case** | $O(n^2)$ | $O(1)$ |

--- 