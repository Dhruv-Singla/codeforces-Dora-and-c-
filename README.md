# codeforces-Dora-and-c-
# Increment-Decrement-Max

## Overview

This C++ program processes multiple test cases where each test case involves a series of operations on a sequence of integers. The operations are based on queries that either increment or decrement the maximum value of the sequence within a specified range.

## Description

The program performs the following steps for each test case:

1. Reads the number of integers `n` and the number of queries `m`.
2. Reads the `n` integers into a vector.
3. Finds the maximum value among these integers.
4. Processes `m` queries where each query consists of:
   - A character `c` (`+` or `-`), indicating whether to increment or decrement the maximum value.
   - Two integers `l` and `r`, defining the range within which the maximum value should be modified.
5. Outputs the updated maximum value after processing each query.

## Input Format

- The first line contains an integer `t`, the number of test cases.
- For each test case:
  - The first line contains two integers `n` and `m`.
  - The second line contains `n` integers, the initial values of the sequence.
  - The next `m` lines each contain:
    - A character `c` (`+` or `-`).
    - Two integers `l` and `r`, defining the range.

## Output Format

- For each test case, print the result of each query on a single line. Each result is the updated maximum value of the sequence after applying the query.

## Constraints

- `1 ≤ t ≤ 100`
- `1 ≤ n, m ≤ 10^5`
- `-10^9 ≤ a[i] ≤ 10^9` (for each integer in the sequence)
- `1 ≤ l ≤ r ≤ 10^9`

## Example

### Input

