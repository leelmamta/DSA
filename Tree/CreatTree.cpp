#include <bits/stdc++.h>
using namespace std;
int N = 5;

/**
 * Create tree with generic Nodes - We can initialized the nodes accordingly
 */
class TreeNode {
  public:
    int data;
    vector<TreeNode*> children;
    TreeNode() : data(0), children(N, nullptr) {}
    TreeNode(int data) : data(data), children(N, nullptr) {}
};

void printTree(TreeNode* root, int level = 0) {
    if (!root) return;
    cout << string(level * 2, ' ') << root->data << endl;
    for (TreeNode* child : root->children) {
        printTree(child, level + 1);
    }
}


TreeNode* createTree() {
    cout<<"Enter root data:"<<endl;
    int data;
    cin>>data;
    TreeNode* root = new TreeNode(data);
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        TreeNode* node = q.front();
        q.pop();
        int numChildrenNode;
        cout<<"Enter number of child node for this node :"<<node->data<<endl;
        cin>>numChildrenNode;
        for(int i =0 ; i<numChildrenNode; ++i) {
           // We have take number of children node for the current node
            cout<<"Enter child value for child of node"<<node->data<<"at children position"<<i+1<<endl;
            int childData; cin>>childData;
            TreeNode* childNode = new TreeNode(childData);
            q.push(childNode);
            node->children.push_back(childNode);
        }
    }

    return root;
}

int main(){
TreeNode* root = createTree();
    printTree(root, 0);
return 1;
}
