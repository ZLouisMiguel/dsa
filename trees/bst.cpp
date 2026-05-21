#include <iostream>
#include <algorithm> // for std::max
using namespace std;

template <typename T>
class BST
{
    struct Node
    {
        T data;
        Node *left;
        Node *right;
        Node(T val) : data(val), left(nullptr), right(nullptr) {}
    };

    Node *root;


    Node *insert(Node *node, T key)
    {
        if (node == nullptr) // found the empty spot → create node
            return new Node(key);

        if (key < node->data)
            node->left = insert(node->left, key);
        else if (key > node->data)
            node->right = insert(node->right, key);
        // if key == node->data, we simply ignore duplicates

        return node; // return (possibly unchanged) node pointer
    }

    // Returns the node with the minimum value in a subtree
    Node *minNode(Node *node)
    {
        while (node->left != nullptr)
            node = node->left;
        return node;
    }

    Node *remove(Node *node, T key)
    {
        if (node == nullptr)
            return nullptr; // key not found

        if (key < node->data)
        {
            node->left = remove(node->left, key);
        }
        else if (key > node->data)
        {
            node->right = remove(node->right, key);
        }
        else // found the node to delete
        {
            // Case 1: no children
            if (node->left == nullptr && node->right == nullptr)
            {
                delete node;
                return nullptr;
            }
            // Case 2a: only right child
            else if (node->left == nullptr)
            {
                Node *temp = node->right;
                delete node;
                return temp;
            }
            // Case 2b: only left child
            else if (node->right == nullptr)
            {
                Node *temp = node->left;
                delete node;
                return temp;
            }
            // Case 3: two children
            // Find inorder successor (smallest value in right subtree),
            // copy its value here, then delete the successor
            else
            {
                Node *successor = minNode(node->right);
                node->data = successor->data;                       // overwrite with successor
                node->right = remove(node->right, successor->data); // delete successor
            }
        }
        return node;
    }

    bool search(Node *node, T key)
    {
        if (node == nullptr)
            return false;
        if (key == node->data)
            return true;
        if (key < node->data)
            return search(node->left, key);
        else
            return search(node->right, key);
    }

    // Left → Root → Right  ⟹  sorted ascending output
    void inorder(Node *node)
    {
        if (node == nullptr)
            return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    // Root → Left → Right  ⟹  useful for copying the tree
    void preorder(Node *node)
    {
        if (node == nullptr)
            return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void postorder(Node *node)
    {
        if (node == nullptr)
            return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }

    int height(Node *node)
    {
        if (node == nullptr)
            return 0;
        return 1 + max(height(node->left), height(node->right));
    }

    int count(Node *node)
    {
        if (node == nullptr)
            return 0;
        return 1 + count(node->left) + count(node->right);
    }

    void destroy(Node *node)
    {
        if (node == nullptr)
            return;
        destroy(node->left);
        destroy(node->right);
        delete node;
    }

public:
 
    BST() : root(nullptr) {}
    ~BST() { destroy(root); }


    void add(T key)
    {
        root = insert(root, key);
    }

    void remove(T key)
    {
        root = remove(root, key);
    }

    bool search(T key)
    {
        return search(root, key);
    }

    void inorder()
    {
        cout << "Inorder  : ";
        inorder(root);
        cout << "\n";
    }

    void preorder()
    {
        cout << "Preorder : ";
        preorder(root);
        cout << "\n";
    }

    void postorder()
    {
        cout << "Postorder: ";
        postorder(root);
        cout << "\n";
    }

    int height()
    {
        return height(root);
    }

    bool isEmpty()
    {
        return root == nullptr;
    }

    int count()
    {
        return count(root);
    }
};


int main()
{
    BST<int> btree;

    btree.add(10);
    btree.add(5);
    btree.add(4);
    btree.add(15);
    btree.add(7);

    btree.inorder();   // 4 5 7 10 15
    btree.preorder();  // 10 5 4 7 15
    btree.postorder(); // 4 7 5 15 10

    cout << "Height  : " << btree.height() << "\n"; // 3
    cout << "Count   : " << btree.count() << "\n";  // 5
    cout << "isEmpty : " << (btree.isEmpty() ? "true" : "false") << "\n";

    cout << "Search 3: " << (btree.search(3) ? "found" : "not found") << "\n";
    cout << "Search 4: " << (btree.search(4) ? "found" : "not found") << "\n";

    btree.remove(3); // key not present — no crash
    btree.remove(5); // node with two children

    cout << "\nAfter removing 5:\n";
    btree.inorder();                               // 4 7 10 15
    cout << "Count   : " << btree.count() << "\n"; // 4

    return 0;
}