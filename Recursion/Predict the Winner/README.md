# LeetCode 486. Predict the Winner

## Problem Statement
Given an array of scores that are non-negative integers. Player 1 and Player 2 play the game on the same array. You are given an array `nums` where the scores of the array are `nums[i]`. 

Each player takes turns, with Player 1 starting first. At each turn, a player chooses the number from either the start or the end of the array to add to their score. This continues until the array is empty, at which point the player with the maximum score wins.

Given an array `nums`, return `true` if Player 1 can win or if both players have the same score, and `false` otherwise. Assume that both players play optimally.

## Input
- `vector<int> nums`: An array of non-negative integers representing the scores.

## Output
- `bool`: `true` if Player 1 wins or ties (score $\ge$ Player 2's score), `false` otherwise.

## Constraints
- `1 <= nums.length <= 20`
- `0 <= nums[i] <= 10^7`
- The total sum of the numbers in the array will not exceed `4 * 10^9`.

## Examples
### Example 1
Input: nums = [1, 5, 2]
Output: false
**Explanation:** Initially, Player 1 can choose between 1 and 2. 
If he chooses 2 (or 1), then Player 2 can take 5 (or 2). 
If Player 2 takes 5, the score is 2 for Player 1, 5 for Player 2. 
Thus, Player 2 wins, so return false.

### Example 2
Input: nums = [1, 5, 233, 7]
Output: true
**Explanation:** Player 1 first chooses 1. Then the array has [5, 233, 7]. Player 2 can choose either 5 or 7. 
No matter what Player 2 chooses, Player 1 can choose 233. 
Player 1 wins with score 1 + 233 = 234, while Player 2 gets 5 + 7 = 12.