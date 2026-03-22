# LRU Cache

## Problem Statement

Design a data structure that follows the constraints of a **Least Recently Used (LRU) Cache**.

Implement the `LRUCache` class:

- `LRUCache(int capacity)`  
  Initialize the LRU cache with a positive size `capacity`.

- `int get(int key)`  
  Return the value of the `key` if the key exists in the cache. Otherwise, return `-1`.

- `void put(int key, int value)`  
  Update the value of the `key` if the key already exists. Otherwise, add the key-value pair to the cache.  
  If the number of keys exceeds the `capacity`, evict the **least recently used key** before inserting the new item.

A key is considered **recently used** if it was accessed using either the `get` or `put` operation.

The operations `get` and `put` should run in **O(1)** average time complexity.

---

## Input

The input consists of a sequence of operations performed on the cache.

- The first line contains two integers:
  - `capacity` — the maximum number of keys the cache can hold.
  - `n` — the number of operations.

- Each of the next `n` lines represents an operation:
  - `get key`
  - `put key value`

---

## Output

For every `get` operation, output the value associated with the key.  
If the key does not exist in the cache, output `-1`.

---

## Constraints


1 ≤ capacity ≤ 10^4
1 ≤ n ≤ 2 * 10^5
0 ≤ key ≤ 10^9
0 ≤ value ≤ 10^9


- At most `2 * 10^5` operations will be performed.
- All operations must be processed efficiently.

---

## Examples

### Example 1

**Input**


2 6
put 1 1
put 2 2
get 1
put 3 3
get 2
get 3


**Output**


1
-1
3


**Explanation**

- `put(1,1)` → cache = {1=1}
- `put(2,2)` → cache = {1=1, 2=2}
- `get(1)` → returns `1` (key 1 becomes most recently used)
- `put(3,3)` → capacity exceeded, evict least recently used key `2`
- `get(2)` → returns `-1` (not found)
- `get(3)` → returns `3`

---

### Example 2

**Input**


1 4
put 1 10
put 2 20
get 1
get 2


**Output**


-1
20


**Explanation**

- `put(1,10)` → cache = {1=10}
- `put(2,20)` → capacity exceeded, evict key `1`
- `get(1)` → returns `-1`
- `get(2)` → returns `20`

---

## Notes

- The cache should always maintain **at most `capacity` elements**.
- When the cache reaches its capacity, the **least recently used** entry must be removed before inserting a new one.
- Accessing an element through `get` or updating it through `put` marks it as **recently used**.
- The data structure should support **constant time operations for both `get` and `put`**.