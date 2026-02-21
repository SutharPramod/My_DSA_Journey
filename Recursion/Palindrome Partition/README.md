# 131. Palindrome Partitioning

## 🧩 Problem Statement

Given a string `s`, partition `s` such that **every substring** of the partition is a **palindrome**.

Return all possible palindrome partitioning of `s`.

You may return the answer in **any order**.

---

## 📥 Input

- `s`: A string consisting of lowercase English letters.

---

## 📤 Output

- Return a list of lists of strings, where each list represents a valid palindrome partition of `s`.

---

## 📌 Constraints

- `1 <= s.length <= 16`
- `s` contains only lowercase English letters.

---

## 🧪 Examples

### Example 1

Input: s = "aab"
Output: [["a","a","b"],["aa","b"]]


### Example 2

Input: s = "a"
Output: [["a"]]


---

## 📝 Notes

- A palindrome is a string that reads the same forward and backward.
- Every substring in a partition must be a palindrome.
- The order of partitions in the output does not matter.