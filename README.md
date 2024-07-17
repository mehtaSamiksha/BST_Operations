# BinarySearchTree

## Project Overview

This project is a C++ implementation of a Binary Search Tree (BST). The BST is a fundamental data structure in computer science that allows for efficient insertion, deletion, and searching of elements. This project provides a console-based interface to perform various operations on the BST, making it a valuable tool for learning and practicing tree-based algorithms.

## Features and Functionalities

### Insertion

- **Insert Node:** Add a new node to the BST. The tree will automatically adjust to maintain its properties.

### Deletion

- **Delete Node:** Remove a node from the BST. The deletion algorithm handles cases where the node has zero, one, or two children.

### Search

- **Find Node:** Search for a node with a specific value in the BST. The function returns the node if found, otherwise it indicates that the node is not present.

### Traversal

- **Inorder Traversal:** Print the nodes of the BST in inorder sequence (left-root-right), which will display the elements in ascending order.
- **Preorder Traversal:** Print the nodes in preorder sequence (root-left-right), useful for creating a copy of the tree.
- **Postorder Traversal:** Print the nodes in postorder sequence (left-right-root), useful for deleting the tree.

### Find Minimum and Maximum

- **FindMin:** Retrieve the node with the minimum value in the BST.
- **FindMax:** Retrieve the node with the maximum value in the BST.

## Usage

The project includes a main function that provides a simple console-based interface to interact with the BST. Users can choose from a menu of operations to perform on the tree, including inserting nodes, deleting nodes, searching for nodes, and displaying the tree using different traversal methods.
