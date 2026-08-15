# LeetCode 875. Koko Eating Bananas

## Problem Statement
Koko loves to eat bananas. There are `n` piles of bananas, the $i^{th}$ pile has `piles[i]` bananas. The guards have gone and will come back in `h` hours.

Koko can decide her banana-eating speed of `k` bananas per hour. Each hour, she chooses some pile of bananas and eats `k` bananas from that pile. If the pile has less than `k` bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the **minimum integer** `k` such that she can eat all the bananas within `h` hours.

## Input
- The first line contains an integer `n`, representing the number of banana piles.
- The second line contains `n` space-separated integers representing `piles[]`.
- The third line contains an integer `h`, representing the maximum available hours.

## Output
- Print a single integer representing the minimum eating speed `k`.

## Constraints
- `1 <= piles.length <= 10^4`
- `piles.length <= h <= 10^9`
- `1 <= piles[i] <= 10^9`

## Examples

### Example 1
Input:
4
3 6 7 11
8

Output:
4

**Explanation:** At speed k = 4, Koko needs 8 hours to finish:
- Pile 1 (3 bananas): takes $\lceil 3 / 4 \rceil = 1$ hour.
- Pile 2 (6 bananas): takes $\lceil 6 / 4 \rceil = 2$ hours.
- Pile 3 (7 bananas): takes $\lceil 7 / 4 \rceil = 2$ hours.
- Pile 4 (11 bananas): takes $\lceil 11 / 4 \rceil = 3$ hours.
Total hours = $1 + 2 + 2 + 3 = 8 \le 8$.

### Example 2
Input:
5
30 11 23 4 20
5

Output:
30

**Explanation:** With h = 5 hours, she must eat at least the size of the largest pile every hour to finish in 5 hours. Speed = 30.

### Example 3
Input:
5
30 11 23 4 20
6

Output:
23

**Explanation:** At speed k = 23, Koko takes $2 + 1 + 1 + 1 + 1 = 6$ hours to finish all piles.