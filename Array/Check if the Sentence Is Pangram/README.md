# LeetCode 1832. Check if the Sentence Is Pangram

## Problem Statement
A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string `sentence` containing only lowercase English letters, return `true` if `sentence` is a pangram, or `false` otherwise.

## Input
- The input consists of a single line containing the string `sentence`.

## Output
- Print `true` if the sentence is a pangram.
- Print `false` if any letter from 'a' to 'z' is missing.

## Constraints
- `1 <= sentence.length <= 1000`
- `sentence` consists of lowercase English letters.

## Examples

### Example 1
Input:
thequickbrownfoxjumpsoverthelazydog

Output:
true

### Example 2
Input:
leetcode

Output:
false

## Notes
- The English alphabet contains exactly 26 unique lowercase letters ('a' through 'z').
- To be a pangram, the total number of distinct characters in the string must equal 26.
- **Recommended Approach:**
  1. Use a hash set or a boolean array of size 26 to keep track of the unique characters encountered.
  2. Iterate through each character of the string and insert it into the set (or mark its index in the boolean array using `character - 'a'`).
  3. After checking the whole string, verify if the size of the set is equal to 26 (or if all 26 positions in the boolean array are marked true).
- This approach runs in $O(n)$ time complexity, where $n$ is the length of the string, and requires $O(1)$ auxiliary space since the storage size is bounded by a constant factor of 26.