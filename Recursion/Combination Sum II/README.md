# LeetCode 40. Combination Sum II

## Problem Statement
Given a collection of candidate numbers (`candidates`) and a target number (`target`), find all unique combinations in `candidates` where the candidate numbers sum to `target`.

Each number in `candidates` may only be used **once** in the combination.

Note: The solution set must not contain duplicate combinations.

## Input
- `candidates`: A list of integers representing the available numbers.
- `target`: An integer representing the target sum.

## Output
- A list of lists containing all unique combinations that sum up to `target`.

## Constraints
- $1 \le \text{candidates.length} \le 100$
- $1 \le \text{candidates}[i] \le 50$
- $1 \le \text{target} \le 30$

## Examples
### Example 1
Input: `candidates = [10,1,2,7,6,1,5], target = 8`
Output: `[[1,1,6],[1,2,5],[1,7],[2,6]]`
**Explanation:** These are the unique combinations whose sum equals 8.

### Example 2
Input: `candidates = [2,5,2,1,2], target = 5`
Output: `[[1,2,2],[5]]`
**Explanation:** These are the unique combinations whose sum equals 5.