# LeetCode 2410. Maximum Matching of Players With Trainers

## Problem Statement
You are given a 0-indexed integer array `players`, where `players[i]` represents the ability of the $i^{th}$ player. You are also given a 0-indexed integer array `trainers`, where `trainers[j]` represents the capacity of the $j^{th}$ trainer.

The $i^{th}$ player can be matched with the $j^{th}$ trainer if the player's ability is **less than or equal to** the trainer's capacity (`players[i] <= trainers[j]`). Additionally, each player can be matched with at most one trainer, and each trainer can be matched with at most one player.

Return the **maximum number of matchings** that can be formed between players and trainers.

## Input
- The first line contains an integer $n$, representing the number of players.
- The second line contains $n$ space-separated integers representing the `players[]` array.
- The third line contains an integer $m$, representing the number of trainers.
- The fourth line contains $m$ space-separated integers representing the `trainers[]` array.

## Output
- Print a single integer representing the maximum possible number of player-trainer matchings.

## Constraints
- $1 \le \text{players.length}, \text{trainers.length} \le 10^5$
- $1 \le \text{players}[i], \text{trainers}[j] \le 10^9$

## Examples

### Example 1
Input:
4
4 7 9 10
4
4 5 8 8

Output:
2

**Explanation:**
One way to get 2 matchings is:
- Match player at index 0 (ability 4) with trainer at index 0 (capacity 4).
- Match player at index 1 (ability 7) with trainer at index 2 (capacity 8).
It can be proven that 2 is the maximum matching possible.

### Example 2
Input:
3
1 1 1
1
10

Output:
1

**Explanation:**
There is only 1 trainer available, so at most 1 player can be matched.