# BST Visualizer

This project is a simple C++ implementation of a Binary Search Tree (BST) that includes functions to insert, search, and visualize the tree structure.

## Features

- **Insert Node**: Add a node with a specific value to the BST.
- **Search Node**: Find a node in the BST by its value.
- **Visualize Tree**: Display the structure of the BST in a visual format, showing the tree's hierarchy.

## Code Overview

### TreeNode Structure

Each node in the tree is represented by the `TreeNode` structure:

```cpp
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
```

### BST Class

The `BST` class contains the following public members:

- **root**: Pointer to the root of the tree.
- **insert(TreeNode* node, int key)**: Inserts a new node with the given key into the BST.
- **search(TreeNode* node, int key)**: Searches for a node with the given key.
- **visualize(TreeNode* node, int space = 0, int height = 10)**: Recursively visualizes the tree structure.

### Example Usage

The `main` function demonstrates the use of the BST class:

```cpp
int main() {
    BST tree;

    tree.root = tree.insert(tree.root, 50);
    tree.insert(tree.root, 30);
    tree.insert(tree.root, 20);
    tree.insert(tree.root, 40);
    tree.insert(tree.root, 70);
    tree.insert(tree.root, 60);
    tree.insert(tree.root, 80);

    cout << "Visualizing BST:" << endl;
    tree.visualize(tree.root);
    cout << endl;

    int searchKey = 40;
    cout << "Searching for " << searchKey << ": " << (tree.search(tree.root, searchKey) != NULL ? "Found" : "Not Found") << endl;

    return 0;
}
```

## How to Run

1. **Compile the code**: Use a C++ compiler to compile the `main.cpp` file.
   ```bash
   g++ -o bst_visualizer main.cpp
   ```

2. **Run the executable**: Execute the compiled file to run the program.
   ```bash
   ./bst_visualizer
   ```

3. **View the output**: The program will display a visual representation of the BST and the result of a search operation.

## Visualization Example

```
        80
    70
        60
50
        40
    30
        20
```

In this example, the tree has nodes with values 50, 30, 20, 40, 70, 60, and 80.

