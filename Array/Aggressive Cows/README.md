Here is the clean Markdown code for the Aggressive Cows problem. This is a classic "Binary Search on Answer" problem where you are maximizing a minimum distance.

Markdown

# Aggressive Cows

## 📝 Problem Description
You are given an array `stalls` which represents the positions of stalls on a straight line. You are also given an integer `k`, which is the number of aggressive cows you need to assign to these stalls.

The cows don't like each other and can become aggressive if they are put in stalls too close to each other. To prevent the cows from fighting, you need to assign them to stalls such that the **minimum distance between any two of them is as large as possible**.

Return the **maximum possible minimum distance**.



---

## 💡 Examples

**Example 1:**
> **Input:** `stalls = [1, 2, 4, 8, 9]`, `k = 3`  
> **Output:** `3`  
> **Explanation:** > If we place cows at stalls `1`, `4`, and `8`, the distances are:  
> - Between 1 and 4: **3** > - Between 4 and 8: **4** > The minimum distance is **3**. Any other arrangement (like 1, 2, 4) would result in a smaller minimum distance.

**Example 2:**
> **Input:** `stalls = [10, 1, 2, 7, 5]`, `k = 3`  
> **Output:** `4`  
> **Explanation:** First, sort the stalls: `[1, 2, 5, 7, 10]`. Placing cows at `1, 5, 10` gives a min distance of `4`.

---

## ⚙️ Constraints
* `2 <= n <= 10^5`
* `0 <= stalls[i] <= 10^9`
* `2 <= k <= n`

---