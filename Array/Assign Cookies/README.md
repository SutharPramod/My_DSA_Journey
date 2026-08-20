# LeetCode 455. Assign Cookies

## Problem Statement
Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.

Each child $i$ has a greed factor $g[i]$, which is the minimum size of a cookie that the child will be content with; and each cookie $j$ has a size $s[j]$. If $s[j] \ge g[i]$, we can assign the cookie $j$ to the child $i$, and the child $i$ will be content. Your goal is to maximize the number of your content children and output the maximum number.

## Input
- The first line contains an integer $n$, representing the number of children.
- The second line contains $n$ space-separated integers representing the greed factors $g[]$.
- The third line contains an integer $m$, representing the number of cookies.
- The fourth line contains $m$ space-separated integers representing the cookie sizes $s[]$.

## Output
- Print a single integer representing the maximum number of children whose greed factors can be satisfied.

## Constraints
- $1 \le g.length \le 3 \times 10^4$
- $0 \le s.length \le 3 \times 10^4$
- $1 \le g[i], s[j] \le 2^{31} - 1$

## Examples

### Example 1
Input:
3
1 2 3
2
1 1

Output:
1

**Explanation:** You have 3 children and 2 cookies. The greed factors of 3 children are 1, 2, 3. 
And even though you have 2 cookies, since their size is both 1, you can only make the child have the greed factor 1 content.
You need to output 1.

### Example 2
Input:
2
1 2
3
1 2 3

Output:
2

**Explanation:** You have 2 children and 3 cookies. The greed factors of 2 children are 1, 2. 
You have 3 cookies and their sizes are big enough to satisfy all of the children. 
You need to output 2.