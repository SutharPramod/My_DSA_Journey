# LeetCode 1324. Print Words Vertically

## Problem Statement
Given a string `s`. Return all the words vertically in the same order in which they appear in `s`.
Words are returned as a list of strings, complete with spaces when necessary. (Trailing spaces are not allowed).
Each word would be put on a top to bottom column in the same order in which they appear in `s`.
If a column is shorter than a word, the remaining characters of the word are padded with spaces.

## Input
A single string `s` containing English letters and spaces.


## Output
A `vector<string>` representing the words printed vertically.

## Constraints
* `1 <= s.length <= 200`
* `s` contains only uppercase English letters.
* It's guaranteed that there is only one space between 2 words.

## Examples
### Example 1
Input: s = "HOW ARE YOU"
Output: ["HAY","ORO","WEU"]
**Explanation:** Each word is printed vertically. 
 "HAY"
 "ORO"
 "WEU"

### Example 2
Input: s = "TO BE OR NOT TO BE"
Output: ["TBONTB","OEROOE","   T"]
**Explanation:** Trailing spaces are not allowed. 
 "TBONTB"
 "OEROOE"
 "   T"