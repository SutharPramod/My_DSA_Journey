# LeetCode 1859. Sorting the Sentence

## Problem Statement
A **sentence** is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be **shuffled** by appending the **1-based index** of each word to the word itself, and then shuffling the words in the sentence.

Given a shuffled sentence `s` containing no more than `9` words, reconstruct and return the original sentence.

## Input
- A single line containing a string representing the shuffled sentence `s`.

## Output
- Print a string representing the reconstructed original sentence.

## Constraints
- `2 <= s.length <= 200`
- `s` consists of lowercase and uppercase English letters, spaces, and digits from `1` to `9`.
- The number of words in `s` is between `1` and `9`.
- The words in `s` are separated by a single space.
- `s` contains no leading or trailing spaces.

## Examples

### Example 1
Input:
is2 sentence4 This1 a3

Output:
This is a sentence

**Explanation:** 
- "This1" has position index 1 $\rightarrow$ "This"
- "is2" has position index 2 $\rightarrow$ "is"
- "a3" has position index 3 $\rightarrow$ "a"
- "sentence4" has position index 4 $\rightarrow$ "sentence"
Concatenating the words in order gives `"This is a sentence"`.

### Example 2
Input:
Myself2 Me1 I4 and3

Output:
Me Myself and I

**Explanation:** 
- "Me1" $\rightarrow$ 1st word: "Me"
- "Myself2" $\rightarrow$ 2nd word: "Myself"
- "and3" $\rightarrow$ 3rd word: "and"
- "I4" $\rightarrow$ 4th word: "I"
Result: `"Me Myself and I"`.