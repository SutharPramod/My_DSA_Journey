# LeetCode 1823. Find the Winner of the Circular Game

## Problem Statement
There are $n$ friends that are playing a game. The friends are sitting in a circle and are numbered from $1$ to $n$ in clockwise order. More formally, moving clockwise from friend $i$ brings you to friend $i+1$ for $1 \le i < n$, and moving clockwise from friend $n$ brings you to friend $1$.

The rules of the game are as follows:
1. Start at friend $1$.
2. Count the next $k$ friends in the clockwise direction including the friend you started at. The counting wraps around the circle and may count some friends more than once.
3. The last friend you counted leaves the circle and loses the game.
4. If there is still more than one friend in the circle, go back to step 2 starting from the immediate clockwise successor of the friend who just lost.
5. Otherwise, the last friend in the circle wins the game.

Given the number of friends, $n$, and an integer $k$, return the winner of the game.

## Input
- An integer `n` ($1 \le n \le 500$) representing the number of friends.
- An integer `k` ($1 \le k \le n$) representing the counting step.

## Output
- An integer representing the index of the friend who wins the game.

## Constraints
- $1 \le k \le n \le 500$

## Examples
### Example 1
Input: n = 5, k = 2
Output: 3
**Explanation:** 
Here are the steps of the game:
1) Start at friend 1
2) Count 2 friends: 1 and 2. Friend 2 leaves the circle. Now circles are [1, 3, 4, 5]
3) Start at friend 3.
4) Count 2 friends: 3 and 4. Friend 4 leaves the circle. Now circles are [1, 3, 5]
5) Start at friend 5.
6) Count 2 friends: 5 and 1. Friend 1 leaves the circle. Now circles are [3, 5]
7) Start at friend 3.
8) Count 2 friends: 3 and 5. Friend 5 leaves the circle. Now circles are [3]
9) Friend 3 is the winner.

### Example 2
Input: n = 6, k = 5
Output: 1
**Explanation:** 
The friends leave in this order: 5, 4, 6, 2, 3. The winner is friend 1.