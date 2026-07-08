# LeetCode 374. Guess Number Higher or Lower

## Problem Statement
We are playing the Guess Game. The game is as follows:
I pick a number from `1` to `n`. You have to guess which number I picked.
Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

You call a pre-defined API `int guess(int num)`, which returns three possible results:
- `-1`: Your guess is higher than the number I picked (i.e. `num > pick`).
- `1`: Your guess is lower than the number I picked (i.e. `num < pick`).
- `0`: Your guess is equal to the number I picked (i.e. `num == pick`).

Return the number that I picked.

## Input
- The first line contains an integer `n`, representing the upper limit of the range.
- The second line contains an integer `pick`, representing the secret number you need to find.

## Output
- Print a single integer representing the correct secret number.

## Constraints
- `1 <= n <= 2^31 - 1`
- `1 <= pick <= n`

## Examples

### Example 1
Input:
10
6

Output:
6

**Explanation:** The search range is 1 to 10. If you guess 5, the API returns 1 (higher). If you guess 6, the API returns 0. You found the pick.

### Example 2
Input:
1
1

Output:
1

### Example 3
Input:
2
1

Output:
1