# [N-Queen Problem](https://www.geeksforgeeks.org/problems/n-queen-problem0315/1)
## Hard
The&nbsp;n-queens puzzle is the problem of placing n queens on a&nbsp;(n × n)&nbsp;chessboard such that no two queens can attack each other. Note that two queens attack each other if they are placed on the same row, the same column, or the same diagonal.

Given an integer&nbsp;n, find all distinct solutions to the&nbsp;n-queens puzzle.
You can return your answer in&nbsp;any&nbsp;order but each solution should represent a distinct board configuration of the queen placements.
Solutions are represented as permutations of [1, 2, 3, ..., n] where the&nbsp;ith&nbsp;position denotes the column number in the ith row.

Examples:
Input: n = 1
Output: [1]
Explaination: Only one queen can be placed in the single cell available.
Input: n = 4
Output: [[2, 4, 1, 3], [3, 1, 4, 2]]
Explaination: There are 2 possible solutions for n = 4.
Input: n = 3
Output: []
Explaination: There are no possible solutions for n = 3.
Constraints:1 ≤ n ≤ 10

