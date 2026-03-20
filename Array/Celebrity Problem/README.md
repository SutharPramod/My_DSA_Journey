# Celebrity Problem

## Problem Statement

At a party of `n` people labeled from `0` to `n-1`, a **celebrity** is defined as someone who:

1. **Everyone knows the celebrity**, and  
2. The celebrity **knows no one** at the party.

You are given a matrix `M` of size `n × n` where:


M[i][j] = 1 → Person i knows person j
M[i][j] = 0 → Person i does not know person j


Determine if there is a **celebrity** in the party.

Return the **index of the celebrity** if one exists. Otherwise, return `-1`.

---

## Input

- An integer `n` representing the number of people at the party.
- A matrix `M` of size `n × n`.


M[i][j] = 1 if person i knows person j
M[i][j] = 0 otherwise


---

## Output

Return a single integer:

- The **index of the celebrity**, if one exists.
- `-1` if there is **no celebrity** in the party.

---

## Constraints


1 ≤ n ≤ 10^4
M[i][j] ∈ {0,1}
M[i][i] = 0


- The matrix represents the **knows relationship** between people.
- A person cannot know themselves.

---

## Examples

### Example 1

**Input**


n = 3

M = [
[0,1,0],
[0,0,0],
[0,1,0]
]


**Output**


1


**Explanation**

- Person `0` knows `1`.
- Person `2` knows `1`.
- Person `1` knows **no one**.

Therefore, person `1` satisfies both celebrity conditions.

---

### Example 2

**Input**


n = 3

M = [
[0,1,0],
[0,0,1],
[1,0,0]
]


**Output**


-1


**Explanation**

No person satisfies both conditions of being known by everyone and knowing no one.

---

### Example 3

**Input**


n = 4

M = [
[0,1,1,1],
[0,0,0,0],
[0,1,0,1],
[0,1,0,0]
]


**Output**


1


**Explanation**

- Persons `0`, `2`, and `3` know person `1`.
- Person `1` knows no one.

Thus, person `1` is the celebrity.

---

## Notes

- A celebrity must be **known by all other people**.
- A celebrity must **not know any other person**.
- If more than one candidate appears possible, only the one satisfying **both conditions** should be returned.
- If no such person exists, return `-1`.