#include <iostream>
#include <cstdlib>

using namespace std;

// Define the structure for a tree node
typedef struct treeNode
{
    int data;
    struct treeNode *left;
    struct treeNode *right;
} treeNode;

// Function to find the minimum value node in a tree
treeNode *FindMin(treeNode *node)
{
    if (node == NULL)
        return NULL;
    if (node->left)
        return FindMin(node->left);
    else
        return node;
}

// Function to find the maximum value node in a tree
treeNode *FindMax(treeNode *node)
{
    if (node == NULL)
        return NULL;
    if (node->right)
        return FindMax(node->right);
    else
        return node;
}

// Function to insert a node in the tree
treeNode *Insert(treeNode *node, int data)
{
    if (node == NULL)
    {
        treeNode *temp = (treeNode *)malloc(sizeof(treeNode));
        temp->data = data;
        temp->left = temp->right = NULL;
        return temp;
    }
    if (data > node->data)
        node->right = Insert(node->right, data);
    else if (data < node->data)
        node->left = Insert(node->left, data);
    return node;
}

// Function to delete a node from the tree
treeNode *Delete(treeNode *node, int data)
{
    treeNode *temp;
    if (node == NULL)
    {
        cout << "Element not found." << endl;
    }
    else if (data < node->data)
    {
        node->left = Delete(node->left, data);
    }
    else if (data > node->data)
    {
        node->right = Delete(node->right, data);
    }
    else if (node->left && node->right)
    {
        temp = FindMin(node->right);
        node->data = temp->data;
        node->right = Delete(node->right, temp->data);
    }
    else
    {
        temp = node;
        if (node->left == NULL)
            node = node->right;
        else if (node->right == NULL)
            node = node->left;
        free(temp);
    }
    return node;
}

// Function to find a node with specific data in the tree
treeNode *Find(treeNode *node, int data)
{
    if (node == NULL)
        return NULL;
    if (data < node->data)
        return Find(node->left, data);
    else if (data > node->data)
        return Find(node->right, data);
    else
        return node;
}

// Function to print the tree in inorder traversal
void PrintInorder(treeNode *node)
{
    if (node == NULL)
        return;
    PrintInorder(node->left);
    cout << node->data << " ";
    PrintInorder(node->right);
}

// Function to print the tree in preorder traversal
void PrintPreorder(treeNode *node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    PrintPreorder(node->left);
    PrintPreorder(node->right);
}

// Function to print the tree in postorder traversal
void PrintPostorder(treeNode *node)
{
    if (node == NULL)
        return;
    PrintPostorder(node->left);
    PrintPostorder(node->right);
    cout << node->data << " ";
}

int main()
{
    treeNode *root = NULL; // Initialize root node
    treeNode *temp;
    int n;
    while (1)
    {
        cout << "1. Insert node." << endl;
        cout << "2. FindMin node." << endl;
        cout << "3. FindMax node." << endl;
        cout << "4. Find node." << endl;
        cout << "5. Delete node." << endl;
        cout << "6. Display tree." << endl;
        cin >> n;
        if (n == 1)
        {
            int m;
            cout << "Num of nodes: ";
            cin >> m;
            for (int i = 0; i < m; i++)
            {
                int a;
                cin >> a;
                root = Insert(root, a); // Insert nodes into the tree
            }
            cout << endl;
        }
        if (n == 2)
        {
            temp = FindMin(root); // Find the minimum node
            if (temp != NULL)
                cout << "Minimum node: " << temp->data << endl;
        }
        if (n == 3)
        {
            temp = FindMax(root); // Find the maximum node
            if (temp != NULL)
                cout << "Maximum node: " << temp->data << endl;
        }
        if (n == 4)
        {
            int b;
            cout << "Which elements you wanna look for: ";
            cin >> b;
            temp = Find(root, b); // Find a specific node
            if (temp == NULL)
                cout << b << " is not found." << endl;
            else
                cout << b << " is found." << endl;
        }
        if (n == 5)
        {
            int c;
            cout << "Which element you wanna delete: ";
            cin >> c;
            root = Delete(root, c); // Delete a specific node
            cout << endl;
        }
        if (n == 6)
        {
            int d;
            cout << "Display the tree." << endl;
            cout << "1. Inorder." << endl;
            cout << "2. Preorder." << endl;
            cout << "3. Postorder." << endl;
            cin >> d;
            if (d == 1)
                PrintInorder(root); // Print tree in inorder
            if (d == 2)
                PrintPreorder(root); // Print tree in preorder
            if (d == 3)
                PrintPostorder(root); // Print tree in postorder
            cout << endl;
        }
    }
    return 0;
}
