# 🧩 Maze Solver

This project is a maze-solving application written in C for at the University of Tasmania. It explores **artificial intelligence techniques** through the use of **Breadth-First Search (BFS)** and **Depth-First Search (DFS)**.

> 👨‍💻 Developed by *Duc Vinh Vu* and *Ravin Boora*  
> 🧪 This project was built as part of a learning assignment and may still contain mistakes and omissions.

---

## 🎯 Objective

The Maze Solver traverses a maze from a starting point to a goal using two common AI search strategies:

- 🔄 **Breadth-First Search (BFS)** — finds the shortest path by exploring layer by layer
- ↘️ **Depth-First Search (DFS)** — explores one path deeply before backtracking

Both strategies use **game trees** to represent the state space and rely on **ADTs** (stacks, queues, and nodes) to manage their internal operations.

---

## 🗂️ File Overview

- `maze.txt` — Maze definition file
- `assig_three223.c/h` — Driver and trace controls
- `game_tree.c/h` — BFS and DFS tree traversal logic
- `game_state.c/h` — Maze reading, movement, and validity checks
- `square_state.c/h` — Square properties: walls, visited, goal
- `stack.c/h`, `queue.c/h`, `node.c/h` — ADTs used for DFS and BFS
- `t_node.c/h` — Tree node structure used in game_tree

---

⚠️ Notes
🧪 This was developed as part of an academic assignment and contains known imperfections.

❗ Some design decisions prioritize clarity and learning over full optimization.

📣 Contributions or feedback are always welcome for improvement.
