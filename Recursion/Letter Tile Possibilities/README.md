# LeetCode 1079. Letter Tile Possibilities
## Problem Statement
You have a set of `tiles` of which each letter can be used some number of times. Return the number of possible non-empty sequences of letters you can make using the letters printed on those tiles.

## Input
- A string `tiles` consisting of uppercase English letters.

## Output
- An integer representing the total number of possible non-empty sequences.

## Constraints
- `1 <= tiles.length <= 7`
- `tiles` consists of uppercase English letters.

## Examples
### Example 1
Input: `tiles = "AAB"`
Output: `8`
**Explanation:** The possible sequences are "A", "B", "AA", "AB", "BA", "AAB", "ABA", "BAA".

### Example 2
Input: `tiles = "AAABBC"`
Output: `188`