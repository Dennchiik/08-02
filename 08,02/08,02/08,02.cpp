#include <iostream>
#include <string>

using namespace std;

class TreeNode {
public:
    string fio;
    float score;
    TreeNode* left;
    TreeNode* right;

    TreeNode(string fio, float score) {
        this->fio = fio;
        this->score = score;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class BinaryTree {
private:
    TreeNode* root;

    void insertRecursive(TreeNode*& node, string fio, float score) {
        if (node == nullptr) {
            node = new TreeNode(fio, score);
        }
        else if (fio < node->fio) {
            insertRecursive(node->left, fio, score);
        }
        else {
            insertRecursive(node->right, fio, score);
        }
    }

public:
    BinaryTree() {
        root = nullptr;
    }

    void insert(string fio, float score) {
        insertRecursive(root, fio, score);
    }
};

int main() {
    BinaryTree tree;
    tree.insert("Иванов Иван", 4.5);
    tree.insert("Петров Петр", 3.8);
    tree.insert("Сидоров Сидор", 4.2);

    return 0;
}
