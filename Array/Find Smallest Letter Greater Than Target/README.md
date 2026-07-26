# LeetCode 744. Find Smallest Letter Greater Than Target

## Problem Statement
You are given an array of characters `letters` that is sorted in non-decreasing order, and a character `target`. There is at least one unique character in `letters`.

Return the smallest character in `letters` that is lexicographically greater than `target`. If such a character does not exist, return the first character in `letters`.

Note that the letters wrap around. For example, if `target == 'z'` and `letters == ['a', 'b']`, the answer is `'a'`.

## Input
- The first line contains an integer `n`, representing the number of elements in the array `letters`.
- The second line contains `n` space-separated characters representing the sorted array.
- The third line contains a single character representing the `target`.

## Output
- Print a single character representing the smallest letter greater than the target.

## Constraints
- `2 <= letters.length <= 10^4`
- `letters[i]` is a lowercase English letter.
- `letters` is sorted in non-decreasing order.
- `letters` contains at least two different characters.
- `target` is a lowercase English letter.

## Examples

### Example 1
Input:
3
c f j
a

Output:
c

**Explanation:** The smallest character lexicographically greater than 'a' in letters is 'c'.

### Example 2
Input:
3
c f j
c

Output:
f

**Explanation:** The smallest character lexicographically greater than 'c' in letters is 'f'.

### Example 3
Input:
3
c f j
z

Output:
c

**Explanation:** There are no characters greater than 'z' in letters, so we wrap around and return the first character, which is 'c'.