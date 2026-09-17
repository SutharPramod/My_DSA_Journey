# LeetCode 1108. Defanging an IP Address

## Problem Statement
Given a valid (IPv4) IP `address`, return a defanged version of that IP address.

A **defanged IP address** replaces every period `"."` with `"[.]"`.

## Input
- A single line containing a string representing a valid IPv4 `address`.

## Output
- Print a string representing the defanged IP address.

## Constraints
- The given `address` is a valid IPv4 address.

## Examples

### Example 1
Input:
1.1.1.1

Output:
1[.]1[.]1[.]1

### Example 2
Input:
255.100.50.0

Output:
255[.]100[.]50[.]0