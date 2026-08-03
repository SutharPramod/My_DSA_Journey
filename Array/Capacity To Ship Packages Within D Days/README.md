# LeetCode 1011. Capacity To Ship Packages Within D Days

## Problem Statement
A conveyor belt has packages that must be shipped from one port to another within `days` days.

The $i^{th}$ package on the conveyor belt has a weight of `weights[i]`. Each day, we load the ship with packages on the conveyor belt (in the order given by `weights`). We may not load more weight than the maximum weight capacity of the ship.

Return the **least weight capacity** of the ship that will result in all the packages on the conveyor belt being shipped within `days` days.

## Input
- The first line contains an integer `n`, representing the number of packages.
- The second line contains `n` space-separated integers representing `weights[]`.
- The third line contains an integer `days`.

## Output
- Print a single integer representing the minimum ship capacity required.

## Constraints
- `1 <= days <= weights.length <= 5 * 10^4`
- `1 <= weights[i] <= 500`

## Examples

### Example 1
Input:
10
1 2 3 4 5 6 7 8 9 10
5

Output:
15

**Explanation:** A ship capacity of 15 is the minimum to ship all the packages in 5 days like this:
- Day 1: 1, 2, 3, 4, 5 (total weight: 15)
- Day 2: 6, 7 (total weight: 13)
- Day 3: 8 (total weight: 8)
- Day 4: 9 (total weight: 9)
- Day 5: 10 (total weight: 10)

### Example 2
Input:
6
3 2 2 4 1 4
3

Output:
6

**Explanation:** A ship capacity of 6 is the minimum to ship all the packages in 3 days like this:
- Day 1: 3, 2 (total weight: 5)
- Day 2: 2, 4 (total weight: 6)
- Day 3: 1, 4 (total weight: 5)

### Example 3
Input:
3
1 2 3 1 1
4

Output:
3

**Explanation:**
- Day 1: 1
- Day 2: 2
- Day 3: 3
- Day 4: 1, 1