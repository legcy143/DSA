#include <iostream>
#include <queue>

// creating class for tree
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node *BuildTree(Node *&root)
{
    int data;
    std::cout << "Enter data : ";
    std::cin >> data;
    if (data == -1)
    {
        return nullptr;
    }
    root = new Node(data);
    std::cout << "\nAt Left Node  of " << data << " ";
    BuildTree(root->left);
    std::cout << "\nAt Right Node  of " << data << " ";
    BuildTree(root->right);
    return root;
}

// level traversing
void LevelTraversing(Node *root)
{
    std::cout << "\nLevel Traversing in Tree\n";
    std::queue<Node *> TreeQueue;
    TreeQueue.push(root);
    TreeQueue.push(nullptr);

    while (!TreeQueue.empty())
    {
        Node *temp = TreeQueue.front();
        TreeQueue.pop();
        if (temp == nullptr)
        {
            std::cout << std::endl;
            if (!TreeQueue.empty())
            {
                TreeQueue.push(nullptr);
            }
        }
        else
        {
            std::cout << temp->data << "  ";
            if (temp->left)
            {
                TreeQueue.push(temp->left);
            };
            if (temp->right)
            {
                TreeQueue.push(temp->right);
            };
        }
    }
}

// In order traversal
void InOrderTraversal(Node *root)
{
    // std::cout << "\n In - Order Traversing in Tree \n";
    if (root == nullptr)
        return;
    InOrderTraversal(root->left);
    std::cout << root->data << " ";
    InOrderTraversal(root->right);
}

// pre order traversal
void PreOrderTraversal(Node *root)
{
    if (root == nullptr)
        return;
    std::cout << root->data << " ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

// post order traversal
void PostOrderTraversal(Node *root)
{
    if (root == nullptr)
        return;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    std::cout << root->data << " ";
}

int main()
{

    std::cout << "har har maahdev\n";
    Node *root = nullptr;
    std::cout << root << std::endl;
    // tree 5 6 3 -1 -1 1 -1 -1 7 6 -1 -1 2 -1 -1
    /*
            5
       6   - -   7
    3 - 1 - - 6 - 2
    */

    BuildTree(root);       // input -> 5 6 3 -1 -1 1 -1 -1 7 6 -1 -1 2 -1 -1
    LevelTraversing(root); // output -> 5 / 6 7 / 3 1 6 2
    std::cout << "\n In - Order Traversing in Tree \n";
    InOrderTraversal(root); // output -> 3 6 1 5 6 7 2
    std::cout << "\n Pre - Order Traversing in Tree\n";
    PreOrderTraversal(root); // output -> 5 6 3 1 7 6 2
    std::cout << "\n Post - Order Traversing in Tree\n";
    PostOrderTraversal(root); // output -> 3 1 6 6 2 7 5

    return 0;
}