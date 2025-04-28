# linkedlist.md

# Linked List (Quick Notes)

## Basics
- Linear data structure of nodes.
- Each node contains:
  - Data
  - Pointer (reference) to next node

## Types of Linked Lists
- **Singly Linked List**: Node points to next node only.
- **Doubly Linked List**: Node points to next and previous nodes.
- **Circular Linked List**: Last node points to head.

## Operations
| Operation            | Time Complexity |
|----------------------|-----------------|
| Insertion at head     | O(1)             |
| Insertion at tail     | O(1) (if tail pointer exists) / O(n) |
| Deletion at head      | O(1)             |
| Deletion at tail      | O(n)             |
| Search                | O(n)             |

## Applications
- Dynamic memory allocation
- Implementing stacks, queues
- Undo functionality (editors)
- Hash Tables (for chaining)
- Graph adjacency representations

## Important Points
- No random access (unlike arrays).
- Good for frequent insertions/deletions.
- Extra space needed for pointers.

## Advantages
- Dynamic size.
- Efficient insertions/deletions.

## Disadvantages
- No direct access to elements.
- More memory usage due to pointers.

---
