🌳 Trees – Data Structures

1. Introduction to Trees

A Tree is a hierarchical, non-linear data structure that helps us arrange records, data, and files in a parent-child relationship.

A tree is a connected, acyclic graph (no cycles or loops). There is exactly one path between any two nodes.

Trees are commonly used to represent hierarchical relationships, such as file systems, family trees, and organisational structures.

2. Abstract Data Type (ADT) – Tree

A Tree ADT is a set of data values and the operations that can be performed on them, defined mathematically and independently of any programming language.

A Tree can be:

- Empty (nil).
- A node containing an element and two subtrees (left and right).

Main Operations

Operation| Description
"null(T)"| Checks whether the tree is empty
"leaf(T)"| Checks whether a node has no children
"fork(element, left, right)"| Creates a new tree
"left(T)"| Returns the left subtree
"right(T)"| Returns the right subtree
"contents(T)"| Returns the value stored in a node
"height(T)"| Returns the height of the tree
"weight(T)"| Returns the total number of nodes

3. Basic Terminologies

- Root: The topmost node of a tree, which has no parent.
- Parent: A node that has one or more child nodes.
- Child: A node directly connected below another node.
- Leaf Node: A node that has no children.
- Internal Node: A node that has at least one child.
- Edge: The link between a parent and a child.
- Level: The root is at level 1, its children at level 2, and so on.
- Height: The number of levels in a tree.
- Branching Factor: The maximum number of children a node can have.

4. Properties of Trees

1. Number of edges = Number of nodes − 1.
2. A tree is a connected and acyclic structure.
3. There is exactly one path between any two nodes.
4. A full tree of height "h" and degree "d" has at most "d^(h-1)" leaves.
5. Level "h" of a full tree has "d^(h-1)" nodes.

Types of Trees

Full Tree: All leaves are at the same level, and all internal nodes have the same number of children.

Complete Tree: All levels are filled except possibly the last level, which is filled from left to right.

5. Implementation of Trees

- Trees are dynamic data structures.
- They grow and shrink during program execution.
- They are usually implemented using pointers (linked representation).
- Each node stores data and pointers to its children.

General K-ary Tree Node

"Data | Link1 | Link2 | ... | Link k"

Each node stores data and links to its child nodes.

6. Tree Traversals

Tree Traversal means visiting every node of a tree in a particular order.

1. Preorder Traversal

Order: Root → Left → Right

Steps:

1. Visit the root.
2. Traverse the left subtree in preorder.
3. Traverse the right subtree in preorder.

Time Complexity: "O(n)"

2. Inorder Traversal

Order: Left → Root → Right

Steps:

1. Traverse the left subtree.
2. Visit the root.
3. Traverse the right subtree.

Time Complexity: "O(n)"

3. Postorder Traversal

Order: Left → Right → Root

Steps:

1. Traverse the left subtree.
2. Traverse the right subtree.
3. Visit the root.

Time Complexity: "O(n)"

4. Level Order Traversal

Visits all nodes level by level, starting from the root. It uses a Queue.

7. Binary Trees

A Binary Tree is a special tree in which every node has at most two children: left and right.

Recursive Definition

A binary tree is either:

- Empty, or
- A node with a left binary subtree and a right binary subtree.

Important Properties

1. A binary tree with "n" nodes has exactly "n − 1" edges.
2. Maximum number of nodes in a binary tree of height "h" = "2^h − 1" (using level-based height).
3. A node at level "l" can have at most "2^(l−1)" nodes at that level.

Types

- Full Binary Tree: Every level is filled; it has "2^h − 1" nodes when height is counted in levels.
- Complete Binary Tree: All levels are full except possibly the last level, which is filled from left to right.

8. Implementation of Binary Tree

Linked Representation

Binary trees are commonly implemented using linked representation with pointers.

C Structure

struct NODE {
    struct NODE *leftchild;
    int value;
    struct NODE *rightchild;
};

Insertion of a New Node

1. Compare the new value with the current node.
2. If the new value is smaller than or equal to the current value, go to the left side.
3. If the new value is greater than the current value, go to the right side.
4. If the selected side is empty, insert the new node there.
5. Otherwise, repeat the process.

9. Array Representation of Binary Tree

Array representation is commonly used for complete binary trees.

Nodes are stored from top to bottom and left to right.

For a node at index "i" (0-based indexing):

Position| Formula
Parent| "(i − 1) / 2"
Left Child| "2i + 1"
Right Child| "2i + 2"

10. Recursive Tree Traversal Algorithms

Inorder

inorder(curr) {
    if (curr->left != NULL)
        inorder(curr->left);

    print(curr->value);

    if (curr->right != NULL)
        inorder(curr->right);
}

Preorder

preorder(curr) {
    print(curr->value);

    if (curr->left != NULL)
        preorder(curr->left);

    if (curr->right != NULL)
        preorder(curr->right);
}

Postorder

postorder(curr) {
    if (curr->left != NULL)
        postorder(curr->left);

    if (curr->right != NULL)
        postorder(curr->right);

    print(curr->value);
}

11. Non-Recursive Implementation

Non-recursive tree traversal uses a Stack.

Non-Recursive Preorder Algorithm

1. Push the root onto the stack.
2. While the stack is not empty:
   - Pop a node.
   - Visit the node.
   - Push its right child.
   - Push its left child.

Threaded Binary Tree

A Threaded Binary Tree is a special binary tree where null right pointers are replaced by threads pointing to the inorder successor.

It helps in non-recursive traversal without using a stack.

12. Applications of Trees

1. Binary Search Trees (BST): Left subtree contains smaller keys and right subtree contains larger keys. Inorder traversal gives sorted order.
2. Expression Trees: Operators are internal nodes and operands are leaves. Used to evaluate arithmetic expressions.
3. File Systems: Folders and files form a hierarchical tree.
4. Game Programming: Used in decision trees and Minimax trees, such as Tic-Tac-Toe.
5. Database Indexing: B-Trees, AVL Trees and Red-Black Trees.
6. Data Compression: Huffman Trees.
7. 3D Graphics: Quadtrees and Octrees.
8. Family Trees and Organisational Charts: Represent hierarchical relationships.

13. Important Points for Revision

Topic| Key Point
Tree| Hierarchical, non-linear data structure
Binary Tree| Maximum 2 children per node
Edges| Nodes − 1
Preorder| Root → Left → Right
Inorder| Left → Root → Right
Postorder| Left → Right → Root
Level Order| Uses Queue
Non-Recursive Traversal| Uses Stack
BST Inorder| Gives sorted data
Tree Implementation| Linked representation using pointers

14. Learning Objectives

After studying Trees, we should be able to:

- Define Tree as an Abstract Data Type (ADT).
- Understand properties of Trees and Binary Trees.
- Implement Trees and Binary Trees.
- Perform different Tree Traversals.
- Understand important applications of Trees.

---

Reference: IIPS DAVV – Data Structures (IC-305C), Trees Unit Notes.

Prepared by: ARUN TIWARI
Course: Integrated MCA | IIPS DAVV
