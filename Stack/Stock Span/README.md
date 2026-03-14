# Stock Span

## Problem Statement

The **Stock Span Problem** is a financial problem where we have a series of daily stock prices.  
For each day, the **span** of the stock’s price is defined as the maximum number of consecutive days (including the current day) for which the price of the stock was **less than or equal to the current day's price**.

Given an array `prices` where `prices[i]` represents the stock price on day `i`, compute the **span of the stock’s price for each day**.

Return an array `span` where `span[i]` represents the span of the stock’s price on day `i`.

---

## Input

An integer array `prices` of size `n` where:


prices[i] = price of the stock on day i


---

## Output

Return an integer array `span` of size `n`, where:


span[i] = number of consecutive days before and including day i
for which the stock price was less than or equal to prices[i]


---

## Constraints


1 ≤ n ≤ 10^5
1 ≤ prices[i] ≤ 10^9


---

## Examples

### Example 1

**Input**


prices = [100, 80, 60, 70, 60, 75, 85]


**Output**


[1, 1, 1, 2, 1, 4, 6]


**Explanation**

| Day | Price | Span |
|----|------|------|
| 0 | 100 | 1 |
| 1 | 80  | 1 |
| 2 | 60  | 1 |
| 3 | 70  | 2 |
| 4 | 60  | 1 |
| 5 | 75  | 4 |
| 6 | 85  | 6 |

- On day `3`, price `70` is greater than `60`, so span = `2`.
- On day `5`, price `75` is greater than `60, 70, 60`, so span = `4`.
- On day `6`, price `85` is greater than all prices from day `1` to day `5`, so span = `6`.

---

### Example 2

**Input**


prices = [10, 20, 30, 40]


**Output**


[1, 2, 3, 4]


**Explanation**

Each day's price is greater than the previous day's price, so the span increases each day.

---

### Example 3

**Input**


prices = [40, 30, 20, 10]


**Output**


[1, 1, 1, 1]


**Explanation**

Each day's price is lower than the previous day, so the span for each day is `1`.

---

## Notes

- The span always includes the **current day**.
- Consecutive previous days must have prices **less than or equal to** the current day's price.
- The output array must have the **same length as the input array**.