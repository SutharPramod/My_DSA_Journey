# LeetCode 1854. Maximum Population Year

## Problem Statement
You are given a 2D integer array `logs` where each `logs[i] = [birth_i, death_i]` indicates the birth and death years of the $i^{th}$ person.

The **population** of some year `x` is the number of people alive during that year. The $i^{th}$ person is counted in year `x`'s population if `x` is in the **inclusive** range `[birth_i, death_i - 1]`. Note that the person is **not** counted in the year that they die.

Return the **earliest** year with the maximum population.

## Input
- The first line contains an integer `n`, representing the number of people.
- The next `n` lines each contain two space-separated integers `birth_i` and `death_i`.

## Output
- Print a single integer representing the earliest year with the highest population.

## Constraints
- `1 <= logs.length <= 100`
- `1950 <= birth_i < death_i <= 2050`

## Examples

### Example 1
Input:
2
1993 1999
2000 2010

Output:
1993

**Explanation:** The maximum population is 1, and 1993 is the earliest year with this population.

### Example 2
Input:
3
1950 1961
1960 1971
1970 1981

Output:
1960

**Explanation:** - 1960: Person 1 and Person 2 are alive. Population = 2.
- 1970: Person 2 and Person 3 are alive. Population = 2.
The earliest year with a population of 2 is 1960.