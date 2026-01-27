# 1910. Remove All Occurrences of a Substring

## 🧩 Problem Statement

You are given two strings `s` and `part`.

Repeatedly remove **all occurrences** of the substring `part` from the string `s` until `s` no longer contains `part`.

Return the final string after all such removals have been completed.

---

## 📥 Input

- `s`: A string consisting of lowercase English letters.
- `part`: A non-empty string consisting of lowercase English letters.

---

## 📤 Output

- Return the resulting string after removing all occurrences of `part` from `s`.

---

## 📌 Constraints

- `1 <= s.length <= 1000`
- `1 <= part.length <= 1000`
- `s` and `part` contain only lowercase English letters.

---

## 🧪 Examples

### Example 1
Input: s = "daabcbaabcbc", part = "abc"
Output: "dab"


### Example 2
Input: s = "axxxxyyyyb", part = "xy"
Output: "ab"


---

## 📝 Notes

- If removing an occurrence of `part` results in a new occurrence being formed, it must also be removed.
- The removal process continues until `part` does not appear anywhere in `s`.