# 📊 Graph - Quick Notes

---

## 1. What is a Graph?
- A non-linear data structure consisting of vertices (nodes) and edges (connections).
- Can represent a wide range of real-world problems (e.g., social networks, maps).
- **Vertex**: Represents a point in the graph.
- **Edge**: Represents a connection between two vertices.

---

## 2. Important Terms
| Term     | Meaning |
|----------|---------|
| Vertex   | A node in the graph |
| Edge     | A connection between two vertices |
| Degree   | Number of edges connected to a vertex |
| Path     | A sequence of edges that connects a set of vertices |
| Cycle    | A path that starts and ends at the same vertex |
| Connected| A graph where there is a path between any two vertices |

---

## 3. Types of Graphs
- **Directed Graph (Digraph)**: Edges have a direction (e.g., A → B).
- **Undirected Graph**: Edges have no direction (e.g., A — B).
- **Weighted Graph**: Each edge has a weight (cost).
- **Unweighted Graph**: Edges have no weight.
- **Complete Graph**: Every vertex is connected to every other vertex.
- **Bipartite Graph**: Vertices can be divided into two disjoint sets, and edges only go between the sets.
- **Cyclic Graph**: Contains at least one cycle.
- **Acyclic Graph**: Does not contain any cycles.

---

## 4. Graph Representation
- **Adjacency Matrix**: A 2D array where matrix[i][j] is 1 if there’s an edge from vertex i to vertex j (for undirected graphs, matrix[i][j] = matrix[j][i]).
- **Adjacency List**: Each vertex has a list of all adjacent vertices.
- **Edge List**: A list of all the edges in the graph, each edge represented by a pair of vertices.

---

## 5. Basic Operations
| Operation           | Description               | Time Complexity (Adj. Matrix) | Time Complexity (Adj. List) |
|---------------------|---------------------------|------------------------------|----------------------------|
| Add Vertex          | Add a new vertex          | O(1)                         | O(1)                       |
| Add Edge            | Add an edge between vertices | O(1)                         | O(1)                       |
| Remove Vertex       | Remove a vertex           | O(V^2)                       | O(V + E)                  |
| Remove Edge         | Remove an edge            | O(1)                         | O(V)                       |
| Search Vertex       | Find a vertex             | O(V)                         | O(V)                       |
| Search Edge         | Find an edge              | O(1)                         | O(E)                       |
| BFS Traversal       | Breadth-First Search      | O(V + E)                     | O(V + E)                  |
| DFS Traversal       | Depth-First Search        | O(V + E)                     | O(V + E)                  |

---

## 6. Graph Traversal Techniques
- **Breadth-First Search (BFS)**: Explores the graph level by level.
  - Suitable for finding the shortest path in an unweighted graph.
  - Uses a **queue** to manage the traversal.
  
- **Depth-First Search (DFS)**: Explores as deeply as possible before backtracking.
  - Suitable for exploring all possible paths.
  - Uses a **stack** (or recursion) for traversal.

---

## 7. Applications of Graphs
- **Social Networks**: Representing relationships between people.
- **Routing Algorithms**: Used in networking to find the shortest path (e.g., Dijkstra’s algorithm).
- **Web Crawling**: Crawling web pages and their links.
- **Recommendation Systems**: Graph-based recommendation engines (e.g., collaborative filtering).
- **Network Flow**: Solving flow problems like the Max-Flow Min-Cut theorem.

---

## 8. Important Points
- Graphs are non-linear and can have complex structures.
- Directed graphs are useful for representing one-way relationships, like roads or links.
- Cycles in a graph make it cyclic, which can complicate traversal and searching.
- Graph traversal algorithms (BFS, DFS) are fundamental for exploring all nodes and edges.

---

