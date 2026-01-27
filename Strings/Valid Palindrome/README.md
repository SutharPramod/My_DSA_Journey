# 🔄 Valid Palindrome Checker

A high-performance C++ implementation to determine if a string is a palindrome. This project focuses on the **Two-Pointer Technique**, ensuring optimal time and space efficiency by handling case-insensitivity and non-alphanumeric characters.



---

## 📝 Problem Statement
A string is considered a **palindrome** if, after:
1. Converting all uppercase letters to **lowercase**,
2. Removing all **non-alphanumeric** characters (spaces, punctuation, symbols),
It reads the same forward and backward.

### Examples:
* **Input:** `"A man, a plan, a canal: Panama"`  
  **Output:** `true` (Normalized: `"amanaplanacanalpanama"`)
* **Input:** `"race a car"`  
  **Output:** `false` (Normalized: `"raceacar"`)