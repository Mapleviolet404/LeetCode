typedef struct
{
    int val;
    TreeNode *left;
    TreeNode *right;
}TreeNode;

typedef enum
{
    false,
    true
}bool;

bool check_tree(TreeNode *root) 
{
    return root->val == root->left->val + root->right->val ? true : false;
}