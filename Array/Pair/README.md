# 📊 Vector of Pairs: Custom Sorting in C++

A comprehensive guide and implementation for managing and sorting collections of related data using `std::vector` and `std::pair`. This approach is essential for competitive programming and complex data organization.



---

## 📝 Overview
A `vector<pair<T1, T2>>` is a powerful way to store two related data points as a single entity within a dynamic array. While the default sort works for basic needs, **Custom Sorting** allows you to define complex priority rules for your data.

### Why use Vector of Pairs?
* **Data Association**: Keep related items (e.g., Student Name and Grade) together during shuffling.
* **Flexibility**: Store different data types in the same record.
* **Performance**: Leverage STL's optimized $O(N \log N)$ sorting algorithms.

---

## 🛠️ Sorting Logic

### 1. Default Behavior
By default, `std::sort` uses **lexicographical comparison**:
1. It compares the `first` elements.
2. If the `first` elements are equal, it compares the `second` elements.

### 2. Custom Comparator (The "Rulebook")
To sort by specific criteria, we pass a **comparator function** or a **lambda** to `std::sort`.