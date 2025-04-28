# 🌳 Tree - Quick Notes

---

## 1. What is a Tree?
- A non-linear hierarchical data structure.
- Made of **nodes** connected by **edges**.
- The **root** node is the topmost node.
- Every node (except the root) has **one parent**.
- Nodes can have **zero or more children**.

---

## 2. Important Terms
| Term     | Meaning |
|----------|---------|
| Root     | Topmost node |
| Leaf     | Node with no children |
| Parent   | Node that has children |
| Child    | Node derived from a parent |
| Sibling  | Nodes with the same parent |
| Depth    | Distance from root to node |
| Height   | Distance from node to deepest leaf |
| Subtree  | Tree formed by a node and its descendants |

---

## 3. Types of Trees
- **Binary Tree**: Each node has at most 2 children.
- **Binary Search Tree (BST)**: Left subtree < node < right subtree.
- **Full Binary Tree**: Every node has 0 or 2 children.
- **Complete Binary Tree**: All levels completely filled except possibly the last.
- **Perfect Binary Tree**: All levels fully filled.
- **Balanced Tree**: Height is minimized (≈ log n).
- **AVL Tree**: Self-balancing BST (balance factor = -1, 0, or 1).
- **Red-Black Tree**: Self-balancing BST with coloring rules.

---

## 4. Basic Operations
| Operation | Description | Time Complexity |
|-----------|-------------|-----------------|
| Insert    | Add a node   | O(log n) (in balanced trees) |
| Delete    | Remove a node | O(log n) |
| Search    | Find a node   | O(log n) |
| Traversal | Visit all nodes | O(n) |

---

## 5. Tree Traversal Techniques
- **Inorder (Left → Root → Right)**
- **Preorder (Root → Left → Right)**
- **Postorder (Left → Right → Root)**
- **Level Order (BFS - level by level)**

---

## 6. Applications of Trees
- Hierarchical data (organization chart, file system)
- Database indexing (B-trees, B+ trees)
- Priority Queues (Heap Tree)
- Routing algorithms (network trees)
- Syntax trees in compilers

---

## 7. Important Points
- Trees are recursive by nature.
- Traversals are very important for problem solving.
- Balanced trees ensure efficient operations (O(log n)).
- Specialized trees (AVL, Red-Black) are used where balance is critical.

---