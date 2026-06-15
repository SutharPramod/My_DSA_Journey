# LeetCode 1773. Count Items Matching a Rule

## Problem Statement
You are given an array `items`, where each `items[i] = [typei, colori, namei]` describes the type, color, and name of the $i^{th}$ item. You are also given a rule represented by two strings, `ruleKey` and `ruleValue`.

The $i^{th}$ item is said to match the rule if one of the following is true:
- `ruleKey == "type"` and `ruleValue == typei`.
- `ruleKey == "color"` and `ruleValue == colori`.
- `ruleKey == "name"` and `ruleValue == namei`.

Return the number of items that match the given rule.

## Input
- The first line contains an integer `n`, representing the number of items.
- The next `n` lines each contain three space-separated strings representing `type`, `color`, and `name` of the item.
- The last line contains two space-separated strings representing `ruleKey` and `ruleValue`.

## Output
- Print a single integer representing the total count of items that match the rule.

## Constraints
- `1 <= items.length <= 10^4`
- `1 <= typei.length, colori.length, namei.length, ruleValue.length <= 10`
- `ruleKey` is equal to either `"type"`, `"color"`, or `"name"`.
- All strings consist only of lowercase English letters.

## Examples

### Example 1
Input:
3
phone blue pixel
computer silver lenovo
phone gold iphone
type phone

Output:
2

### Example 2
Input:
3
phone blue pixel
computer silver phone
phone gold iphone
color silver

Output:
1