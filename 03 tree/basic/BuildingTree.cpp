#include <iostream>
using namespace std;

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

Node* BuildTree(Node *root)
{
    int data;
    cout << "Enter data : ";
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return nullptr;
    }
    cout << "\nAt Left Node  of "<<data<<" ";
    BuildTree(root->left);
      cout << "\nAt Right Node  of "<<data<<" ";
    BuildTree(root->right);
    return root;

}

int main()
{

    cout << "har har maahdev\n";
    Node *root = nullptr;
    cout << root << endl;
    cout << "before building tree \n";
    BuildTree(root);
    cout << "\nAfter building tree \n";
    return 0;
}