# 🧠 Dynamic Programming (DP) - Quick Notes

---

## 1. What is Dynamic Programming?
- A method for solving problems by breaking them down into smaller subproblems.
- Uses **memoization** or **tabulation** to store solutions to subproblems to avoid redundant work.
- Particularly useful for problems with overlapping subproblems and optimal substructure.

---

## 2. Key Concepts
- **Overlapping Subproblems**: The problem can be broken down into subproblems that are solved multiple times.
- **Optimal Substructure**: The solution of the problem can be constructed efficiently from solutions of its subproblems.

---

## 3. Techniques
- **Memoization**: Top-down approach, where results of subproblems are stored and reused.
- **Tabulation**: Bottom-up approach, where the solutions to smaller subproblems are computed iteratively and stored in a table.

---

## 4. Steps to Solve Using DP
1. **Characterize the structure of the optimal solution**.
2. **Define the value of the optimal solution recursively**.
3. **Compute the optimal solution using either memoization or tabulation**.
4. **Build the solution incrementally** by storing solutions to subproblems.

---

## 5. Time Complexity
- The time complexity of a dynamic programming solution is usually **O(n)** or **O(n^2)** depending on the number of subproblems and the complexity of each subproblem.
- **Memoization**: Time complexity is typically O(n) if we store results in a hash map or array.
- **Tabulation**: Time complexity is O(n) if we fill up a table.

---

## 6. Common Problems Solved Using DP
- **Fibonacci Sequence**: The simplest DP problem, where each number is the sum of the two preceding ones.
- **Knapsack Problem**: A problem where we try to maximize the value of items that can fit into a knapsack of limited weight.
- **Longest Common Subsequence (LCS)**: Finding the longest subsequence that appears in both sequences.
- **Longest Increasing Subsequence (LIS)**: Finding the longest subsequence where elements are in strictly increasing order.
- **Coin Change Problem**: Finding the minimum number of coins required to make a given sum.

---

## 7. Common Dynamic Programming Patterns
- **1D DP**: The problem can be solved using a one-dimensional array (e.g., Fibonacci, Coin Change).
- **2D DP**: The problem requires a two-dimensional array (e.g., LCS, Longest Palindromic Subsequence).
- **State Compression**: Reducing space complexity by optimizing the DP table (using a 1D array instead of 2D).
  
---

## 8. Applications of Dynamic Programming
- **Optimization Problems**: Maximal/minimal values, shortest paths, etc.
- **Sequence Alignment**: In bioinformatics, finding the most efficient way to align DNA sequences.
- **Game Theory**: Solving combinatorial games and strategy optimization.
- **Resource Allocation**: Solving problems where resources are allocated optimally, such as job scheduling.

---

## 9. Important Points
- DP is most useful when the problem has **overlapping subproblems** and **optimal substructure**.
- It reduces the time complexity from exponential to polynomial by storing results of subproblems.
- **Space optimization** is possible by reusing the DP array or table and reducing its size.

---

## 10. Example
- **Fibonacci Numbers (Recursive to DP)**:
  - Recursive solution: O(2^n)
  - DP solution (Memoization or Tabulation): O(n)
