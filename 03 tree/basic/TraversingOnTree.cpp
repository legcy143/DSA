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
            std::cout<< temp->data << "  " ;
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

int main()
{

    std::cout << "har har maahdev\n";
    Node *root = nullptr;
    std::cout << root << std::endl;
    // input 5 6 3 -1 -1 1 -1 -1 7 6 -1 -1 2 -1 -1
    /*
            5
       6   - -   7
    3 - 1 - - 6 - 2
    */

    BuildTree(root);
    LevelTraversing(root);
    return 0;
}