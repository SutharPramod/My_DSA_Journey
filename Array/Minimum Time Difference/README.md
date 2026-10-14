# LeetCode 539. Minimum Time Difference

## Problem Statement
Given a list of 24-hour time points given in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.

## Input
A list of strings `timePoints` representing 24-hour times in the format "HH:MM".
```cpp
using namespace std;
```

## Output
An integer representing the minimum time difference in minutes between any two time-points.

## Constraints
* `2 <= timePoints.length <= 2 * 10^4`
* `timePoints[i]` is in the format "HH:MM".

## Examples
### Example 1
Input: timePoints = ["23:59","00:00"]
Output: 1
**Explanation:** The minimum time difference is 1 minute between 23:59 and 00:00.

### Example 2
Input: timePoints = ["00:00","23:59","00:00"]
Output: 0
**Explanation:** The minimum time difference is 0 minutes between 00:00 and 00:00.