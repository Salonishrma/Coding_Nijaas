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
    if(root->left!=NULL){
        fun(root->left);
    }
    if(root->right!=NULL){
        fun(root->right);
    }
    v1.push_back(root->data);
}
vector<int> postorderTraversal(TreeNode *root)
{
    // Write your code here.
     if(root==NULL){
         return v1;
     }
     fun(root);
     return v1;
}
