# Stack (Quick Notes)

## Basics
- Linear data structure (LIFO: Last In, First Out)
- Operations:
  - `push(x)`: Add element on top
  - `pop()`: Remove and return top element
  - `peek() / top()`: View top element without removing
  - `isEmpty()`: Check if stack is empty

## Time Complexity
| Operation | Complexity |
|-----------|------------|
| push      | O(1)        |
| pop       | O(1)        |
| peek/top  | O(1)        |
| isEmpty   | O(1)        |

## Applications
- Function call management (call stack)
- Expression evaluation (infix, postfix)
- Undo features (editors, apps)
- Balanced parentheses problems
- Depth-first search (DFS)
- Backtracking algorithms

## Implementation
- Using Array/List
- Using Linked List

## Important Points
- Stack Overflow: Pushing when stack is full (fixed size)
- Stack Underflow: Popping from empty stack
- Recursive functions internally use system stack

---
