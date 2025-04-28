# Queue (Quick Notes)

## Basics
- Linear data structure (FIFO: First In, First Out)
- Operations:
  - `enqueue(x)`: Add element to the rear
  - `dequeue()`: Remove and return element from front
  - `peek() / front()`: View front element without removing
  - `isEmpty()`: Check if queue is empty

## Time Complexity
| Operation  | Complexity |
|------------|------------|
| enqueue    | O(1)        |
| dequeue    | O(1)        |
| peek/front | O(1)        |
| isEmpty    | O(1)        |

## Applications
- CPU Scheduling
- BFS (Breadth-First Search)
- Printer Queue
- Handling requests (server queues)
- Caching (First Come First Served)

## Types of Queues
- **Simple Queue**: Basic FIFO
- **Circular Queue**: Connects end to start to use space efficiently
- **Deque (Double-ended queue)**: Insert and delete from both ends
- **Priority Queue**: Elements served based on priority

## Implementation
- Using Array/List
- Using Linked List
- Using Two Stacks (for special cases)

## Important Points
- Circular queues avoid wastage of space.
- Deques are versatile (insert/remove at both ends).
- Priority Queues usually use Heaps internally.

---
