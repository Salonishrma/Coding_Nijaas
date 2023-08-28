/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int>v1;
void fun(TreeNode* root){
    if(root->left){
        fun(root->left);
    }
    v1.push_back(root->data);
    if(root->right){
        fun(root->right);
    }
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    if(root==NULL)
    return v1;
    fun(root);
    return v1;
}
