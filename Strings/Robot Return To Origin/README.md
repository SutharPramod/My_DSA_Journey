# LeetCode 657. Robot Return To Origin

## Problem Statement
There is a robot starting at the position $(0, 0)$, the origin, on a 2D plane. Given a sequence of its moves, judge if this robot ends up at $(0, 0)$ after it completes its moves.

You are given a string `moves` that represents the move sequence of the robot where `moves[i]` represents its $i^{th}$ move. Valid moves are `'R'` (right), `'L'` (left), `'U'` (up), and `'D'` (down).

Return `true` if the robot returns to the origin after it finishes all of its moves, or `false` otherwise.

**Note:** The way that the robot is represented is "faceless". The moves `'R'` and `'L'` all make the robot move along the x-axis, while `'U'` and `'D'` all make the robot move along the y-axis. Regardless of direction, a single move has a magnitude of 1.

## Input
A string `moves` consisting of characters `'U'`, `'D'`, `'L'`, and `'R'`.

## Output
A boolean value (`true` or `false`) indicating whether the robot returns to the origin.

## Constraints
* `1 <= moves.length <= 2 * 10^4`
* `moves` only contains the characters `'U'`, `'D'`, `'L'` and `'R'`.

## Examples
### Example 1
Input: moves = "UD"
Output: true
**Explanation:** The robot moves up once, then down once. All moves have taken it back to the origin.

### Example 2
Input: moves = "LL"
Output: false
**Explanation:** The robot moves left twice. It end up two units to the left of the origin, not at the origin itself.