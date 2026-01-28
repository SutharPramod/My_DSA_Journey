# 567. Permutation in String

## 🧩 Problem Statement

Given two strings `s1` and `s2`, return `true` if `s2` contains a **permutation** of `s1`, or `false` otherwise.

In other words, return `true` if one of `s1`'s permutations is a substring of `s2`.

---

## 📥 Input

- `s1`: A string consisting of lowercase English letters.
- `s2`: A string consisting of lowercase English letters.

---

## 📤 Output

- Return `true` if `s2` contains a permutation of `s1`.
- Otherwise, return `false`.

---

## 📌 Constraints

- `1 <= s1.length, s2.length <= 10^4`
- `s1` and `s2` contain only lowercase English letters.

---

## 🧪 Examples

### Example 1
Input: s1 = "ab", s2 = "eidbaooo"
Output: true


### Example 2
Input: s1 = "ab", s2 = "eidboaoo"
Output: false


---

## 📝 Notes

- A permutation is a rearrangement of characters.
- The matching substring in `s2` must be exactly the same length as `s1`.