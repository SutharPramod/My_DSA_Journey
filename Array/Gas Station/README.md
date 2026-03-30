# Gas Station (Circuit Completion)

## Problem Statement

There are `n` gas stations arranged in a **circular route**. You are given two integer arrays:

- `gas[i]` — the amount of gas available at the `i-th` station.
- `cost[i]` — the amount of gas required to travel from the `i-th` station to the `(i + 1)-th` station.

You have an empty gas tank at the beginning and can start at **any gas station**.

Return the **starting gas station index** if you can travel around the circuit **once in the clockwise direction** without running out of gas. Otherwise, return `-1`.

If a solution exists, it is guaranteed to be **unique**.

---

## Input

- An integer array `gas` of size `n`.
- An integer array `cost` of size `n`.


gas[i] = amount of gas at station i
cost[i] = gas required to travel from station i to (i + 1) % n


---

## Output

Return a single integer:

- The **starting index** of the gas station from where the circuit can be completed.
- `-1` if it is not possible.

---

## Constraints


1 ≤ n ≤ 10^5
0 ≤ gas[i], cost[i] ≤ 10^9


---

## Examples

### Example 1

**Input**


gas = [1,2,3,4,5]
cost = [3,4,5,1,2]


**Output**


3


**Explanation**

Start at station `3`:

- Tank = 4 → travel to 4 (cost 1) → tank = 3
- Tank = 3 + 5 = 8 → travel to 0 (cost 2) → tank = 6
- Tank = 6 + 1 = 7 → travel to 1 (cost 3) → tank = 4
- Tank = 4 + 2 = 6 → travel to 2 (cost 4) → tank = 2
- Tank = 2 + 3 = 5 → travel to 3 (cost 5) → tank = 0

Successfully completed the circuit.

---

### Example 2

**Input**


gas = [2,3,4]
cost = [3,4,3]


**Output**


-1


**Explanation**

No starting station allows completing the full circuit without running out of gas.

---

### Example 3

**Input**


gas = [5,1,2,3,4]
cost = [4,4,1,5,1]


**Output**


4


**Explanation**

Starting at station `4` allows completing the full circuit.

---

## Notes

- The route is **circular**, so after the last station, you return to the first.
- You must ensure that the gas tank never becomes negative during the journey.
- If a valid starting point exists, it is guaranteed to be **unique**.
- Return `-1` if completing the circuit is not possible.