# 📏 User-Defined String Length (`strlen` implementation)

A custom, library-free implementation of the string length function in C++. This project demonstrates fundamental concepts of **Memory Layout**, **Character Arrays**, and the **Null Terminator** logic.



---

## 📝 Overview
In C and C++, strings are sequences of characters stored in contiguous memory. The computer identifies the end of a string using a special sentinel value called the **Null Character** (`\0`). 

While the standard library offers `strlen()`, this manual implementation provides a deep look into how string traversal works at a low level.

### Key Learnings
* **Null Termination**: Understanding that `"Hello"` actually takes 6 bytes in memory (`H-e-l-l-o-\0`).
* **Linear Traversal**: Iterating through memory until a specific condition is met.
* **Array-Pointer Duality**: How arrays are passed and accessed in functions.

---

## 🛠️ The Logic
The function follows a simple but effective linear scan:
1. Initialize a counter `length` at `0`.
2. Start at the first memory address of the string.
3. If the character at the current address is **NOT** `\0`:
   - Increment the `length`.
   - Move to the next memory address.
4. If `\0` is found, return the final `length`.