# First Unique Character in a String

## Problem Statement

Given a string `s`, find the **index of the first non-repeating character** in the string.

A character is considered **unique** if it appears **exactly once** in the string.

Return the **index of the first unique character**. If no such character exists, return `-1`.

The indexing of the string starts from `0`.

---

## Input

A single string `s` consisting of lowercase English letters.


s = input string


---

## Output

Return an integer representing the **index of the first non-repeating character** in the string.  
If no unique character exists, return `-1`.

---

## Constraints


1 ≤ s.length ≤ 10^5
s consists of only lowercase English letters.


---

## Examples

### Example 1

**Input**


s = "leetcode"


**Output**


0


**Explanation**

The character `'l'` appears only once and is the first unique character in the string.

---

### Example 2

**Input**


s = "loveleetcode"


**Output**


2


**Explanation**

Characters and their occurrences:

- `'l'` → appears twice  
- `'o'` → appears twice  
- `'v'` → appears once  

The first unique character is `'v'` at index `2`.

---

### Example 3

**Input**


s = "aabb"


**Output**


-1


**Explanation**

All characters appear more than once, so there is no unique character in the string.

---

## Notes

- The result must return the **index** of the character, not the character itself.
- If multiple unique characters exist, return the **first one based on index order**.
- If every character repeats, the output should be `-1`.