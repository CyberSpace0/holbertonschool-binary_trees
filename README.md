# C - Binary Trees

## 📌 Project Overview

This project focuses on implementing and manipulating **Binary Trees** in C.
You will learn how tree data structures work internally, how to traverse them recursively, and how to analyze their time complexity.

The project covers:

* Creating binary tree nodes
* Inserting nodes
* Deleting nodes
* Tree traversals
* Measuring tree properties (height, depth, size, etc.)
* Understanding special types of binary trees

---

## 🌳 Data Structure Used

```c
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;
```

Each node contains:

* `n` → integer value
* `parent` → pointer to parent node
* `left` → pointer to left child
* `right` → pointer to right child

---

## 📂 Mandatory Tasks Overview

### 1️⃣ Create a Binary Tree Node

Function creates a new node and initializes its pointers to NULL.

### 2️⃣ Insert Left

Insert a node as the left child.
If a left child already exists, it becomes the left child of the new node.

### 3️⃣ Insert Right

Same logic as insert left but for the right side.

### 4️⃣ Delete Entire Tree

Use post-order traversal to free all nodes safely:

* Free left subtree
* Free right subtree
* Free current node

### 5️⃣ Check if Node is Leaf

A node is a leaf if:

```
left == NULL && right == NULL
```

### 6️⃣ Check if Node is Root

A node is root if:

```
parent == NULL
```

### 7️⃣ Tree Traversals

#### Preorder

Root → Left → Right

#### Inorder

Left → Root → Right

#### Postorder

Left → Right → Root

All traversals are implemented using recursion.

---

## 📏 Height vs Depth

### Height

The height of a tree is:

> The number of nodes in the longest path from the root to a leaf.

Recursive formula:

```
height = max(height(left), height(right)) + 1
```

### Depth

Depth of a node is:

> Number of edges from the root to that node.

---

## 🌲 Types of Binary Trees

* Full Binary Tree
* Perfect Binary Tree
* Complete Binary Tree
* Balanced Binary Tree
* Binary Search Tree (BST)
* AVL Tree
* Heap

---

## ⏱ Time Complexity (Big O)

| Operation | Time Complexity |
| --------- | --------------- |
| Insertion | O(n)            |
| Deletion  | O(n)            |
| Search    | O(n)            |
| Traversal | O(n)            |
| Height    | O(n)            |

Note: For Binary Search Trees (BST), search may become O(log n) if balanced.

---

## 🧠 Key Concepts Practiced

* Recursion
* Pointers manipulation
* Tree traversal algorithms
* Memory management (malloc / free)
* Big O analysis

---

## 🛠 Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_trees
```

---

## 🚀 Learning Objectives

By completing this project, you should be able to:

* Explain what a binary tree is
* Implement tree traversal algorithms
* Compute tree properties
* Manage dynamic memory correctly
* Understand recursive problem solving

---

## ✍ Author

Azzam Al duyuli & abdulrahman Wadani

---

⭐ This project builds the foundation for advanced structures like AVL Trees, Red-Black Trees, and Heaps.
