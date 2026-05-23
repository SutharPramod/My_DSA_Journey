# LeetCode 127. Word Ladder

## Problem Statement
A transformation sequence from word `beginWord` to word `endWord` using a dictionary `wordList` is a sequence of words `beginWord -> s1 -> s2 -> ... -> sk` such that:
- Every adjacent pair of words differs by a single letter.
- Every `si` for `1 <= i <= k` is in `wordList`. Note that `beginWord` does not need to be in `wordList`.
- `sk == endWord`

Given two words, `beginWord` and `endWord`, and a dictionary `wordList`, return the number of words in the shortest transformation sequence from `beginWord` to `endWord`, or `0` if no such sequence exists.

## Input
- The first line contains two strings representing `beginWord` and `endWord`.
- The second line contains an integer `n`, representing the number of words in the dictionary.
- The third line contains `n` space-separated strings representing the elements of `wordList`.

## Output
- Print a single integer representing the number of words in the shortest transformation sequence.

## Constraints
- `1 <= beginWord.length <= 10`
- `endWord.length == beginWord.length`
- `1 <= wordList.length <= 5000`
- `wordList[i].length == beginWord.length`
- `beginWord`, `endWord`, and `wordList[i]` consist of lowercase English letters.
- `beginWord != endWord`
- All the words in `wordList` are unique.

## Examples

### Example 1
Input:
hit cog
6
hot dot dog lot log cog

Output:
5

### Example 2
Input:
hit cog
5
hot dot dog lot log

Output:
0

## Notes
- The problem can be modeled as an unweighted, undirected graph where each word is a node, and an edge exists between two nodes if their words differ by exactly one character.
- Finding the shortest path in an unweighted graph is a classic application of Breadth-First Search (BFS).