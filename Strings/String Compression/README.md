# String Compression

## 🧩 Problem Statement

Given an array of characters `chars`, compress it using the following algorithm:

Begin with an empty string `s`. For each group of **consecutive repeating characters** in `chars`:

- If the group's length is `1`, append the character to `s`.
- Otherwise, append the character followed by the group's length.

The compressed string `s` should be stored back into the input character array `chars`.  
Return the **new length** of the array after compression.

You must modify the input array **in-place** with **O(1) extra space**.

---

## 📥 Input

- `chars`: An array of characters.

---

## 📤 Output

- Return an integer representing the length of the compressed array.

---

## 📌 Constraints

- `1 <= chars.length <= 2000`
- `chars[i]` is a lowercase English letter, uppercase English letter, digit, or symbol.

---

## 🧪 Examples

### Example 1
Input: chars = ["a","a","b","b","c","c","c"]
Output: 6
Explanation: The array becomes ["a","2","b","2","c","3"]


### Example 2
Input: chars = ["a"]
Output: 1


### Example 3
Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
Output: 4
Explanation: The array becomes ["a","b","1","2"]


---

## 📝 Notes

- Counts greater than `9` should be split into multiple characters.
- The final compressed array does not need to be shorter than the original.