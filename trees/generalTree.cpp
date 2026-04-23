#include <iostream>
#include <vector>
using namespace std;

class Tree
{
private:
    struct Node
    {
        int data;
        vector<Node *> children;

        Node(int val)
        {
            data = val;
        }
    };

    void addChild(Node *parent, int val)
    {
        Node *newNode = new Node(val);
        parent->children.push_back(newNode);
    }

    Node *search(Node *root, int target)
    {
        if (root == nullptr)
            return nullptr;

        if (root->data == target)
            return root;

        for (Node *child : root->children)
        {
            Node *found = search(child, target);
            if (found != nullptr)
                return found;
        }

        return nullptr;
    }

    void traverse(Node *root)
    {
        if (root == nullptr)
            return;
        cout << root->data << " ";
        for (Node *child : root->children)
        {
            traverse(child);
        }
    }

    bool deleteNode(Node *root, int target)
    {
        if (root == nullptr)
            return false;
        for (auto it = root->children.begin(); it != root->children.end(); ++it)
        {
            if ((*it)->data == target)
            {
                delete *it;
                root->children.erase(it);
                return true;
            }

            if (deleteNode(*it, target))
                return true;
        }

        return false;
    }
};