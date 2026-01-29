# Reverse Words in a String

## 🧩 Problem Statement

Given an input string `s`, reverse the order of the **words**.

A word is defined as a sequence of non-space characters. The words in `s` will be separated by at least one space.

Return a string of the words in **reverse order**, concatenated by a single space.

---

## 📥 Input

- `s`: A string containing words and spaces.

---

## 📤 Output

- Return a string with the words in reversed order, separated by a single space.

---

## 📌 Constraints

- `1 <= s.length <= 10^4`
- `s` contains English letters (upper-case and lower-case), digits, and spaces `' '`
- There is at least one word in `s`

---

## 🧪 Examples

### Example 1
Input: s = "the sky is blue"
Output: "blue is sky the"


### Example 2
Input: s = " hello world "
Output: "world hello"


### Example 3
Input: s = "a good example"
Output: "example good a"


---

## 📝 Notes

- Leading and trailing spaces should be removed.
- Multiple spaces between words should be reduced to a single space in the output.
- The relative order of characters within each word remains unchanged.