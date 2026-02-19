# Tower of Hanoi

## 🧩 Problem Statement

The **Tower of Hanoi** is a classic problem consisting of three rods and `n` disks of different sizes.

The disks are initially stacked on the **source rod** in decreasing order of size (largest at the bottom).  
The goal is to move all disks to the **destination rod**, using the **auxiliary rod**, following these rules:

1. Only one disk can be moved at a time.
2. A disk can only be placed on top of a larger disk or on an empty rod.
3. Every move consists of taking the top disk from one rod and placing it on another rod.

Given an integer `n`, return the **sequence of moves** required to transfer all disks from the source rod to the destination rod.

---

## 📥 Input

- `n`: An integer representing the number of disks.

---

## 📤 Output

- Return a list of moves.
- Each move should be represented as a pair `[from, to]`, indicating moving the top disk from rod `from` to rod `to`.

---

## 📌 Constraints

- `1 <= n <= 20`

---

## 🧪 Examples

### Example 1
Input: n = 2

Output:
1 -> 2
1 -> 3
2 -> 3


### Example 2
Input: n = 1

Output:
1 -> 3


---

## 📝 Notes

- Rods are typically labeled as `1` (source), `2` (auxiliary), and `3` (destination).
- The minimum number of moves required to solve the problem is `(2^n) - 1`.