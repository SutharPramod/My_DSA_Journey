# LeetCode 888. Fair Candy Swap

## Problem Statement
Alice and Bob have a different total number of candies. You are given two integer arrays `aliceSizes` and `bobSizes` where `aliceSizes[i]` is the number of candies of the $i^{th}$ box of candy that Alice has and `bobSizes[j]` is the number of candies of the $j^{th}$ box of candy that Bob has.

Since they are friends, they would like to exchange one candy box each so that after the exchange, they both have the same total amount of candy. The total amount of candy a person has is the sum of the number of candies in each box they have.

Return an integer array `answer` where `answer[0]` is the number of candies in the box that Alice must exchange, and `answer[1]` is the number of candies in the box that Bob must exchange. If there are multiple answers, you may **return any one of them**. It is guaranteed that at least one answer exists.

## Input
- The first line contains an integer `n1`, representing the number of candy boxes Alice has.
- The second line contains `n1` space-separated integers representing `aliceSizes`.
- The third line contains an integer `n2`, representing the number of candy boxes Bob has.
- The fourth line contains `n2` space-separated integers representing `bobSizes`.

## Output
- Print two space-separated integers representing the candy box size Alice swaps and the candy box size Bob swaps, respectively.

## Constraints
- `1 <= aliceSizes.length, bobSizes.length <= 10^4`
- `1 <= aliceSizes[i], bobSizes[j] <= 10^5`
- Alice and Bob have a different total amount of candy.
- There will be at least one valid answer for the given input.

## Examples

### Example 1
Input:
2
1 1
2
2 2

Output:
1 2

**Explanation:** Alice has a total of $1 + 1 = 2$ candies. Bob has a total of $2 + 2 = 4$ candies. If Alice gives a box of size 1 and Bob gives a box of size 2, Alice will have $2 - 1 + 2 = 3$ candies, and Bob will have $4 - 2 + 1 = 3$ candies.

### Example 2
Input:
2
1 2
2
2 3

Output:
1 2

### Example 3
Input:
2
2
1
2 3

Output:
2 3