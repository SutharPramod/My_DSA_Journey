# LeetCode 1217. Minimum Cost to Move Chips to The Same Position

## Problem Statement
You have `n` chips, where the position of the $i^{th}$ chip is `position[i]`.

You need to move all the chips to **the same position**. In one step, you can change the position of the $i^{th}$ chip from `position[i]` to:
- `position[i] + 2` or `position[i] - 2` with `cost = 0`.
- `position[i] + 1` or `position[i] - 1` with `cost = 1`.

Return the minimum cost needed to move all the chips to the same position.

## Input
- The first line contains an integer `n`, representing the total number of chips.
- The second line contains `n` space-separated integers representing the initial positions of the chips.

## Output
- Print a single integer representing the minimum cost to gather all chips at any single position.

## Constraints
- `1 <= position.length <= 100`
- `1 <= position[i] <= 10^9`

## Examples

### Example 1
Input:
3
1 2 3

Output:
1

**Explanation:**
- First step: Move the chip at position 3 to position 1 with a cost of 0 (since $|3 - 1| = 2$). Now, chips are at positions `[1, 2, 1]`.
- Second step: Move the chip at position 2 to position 1 with a cost of 1 (since $|2 - 1| = 1$). Now, all chips are at position 1.
Total minimum cost is 1.

### Example 2
Input:
5
2 2 2 3 3

Output:
2

**Explanation:** We can move the two chips at position 3 to position 2. Each move costs 1, totaling a cost of 2. All chips will then end up at position 2.

### Example 3
Input:
1
1000000000

Output:
0