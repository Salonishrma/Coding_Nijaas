vector<int>v1;
void ans(TreeNode<int>* root){
    v1.push_back(root->data);
    if(root->left){
        ans(root->left);
    }
    if(root->right){
        ans(root->right);
    }
}
vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    if(root==NULL){
        return v1;
    }
    ans(root);
    return v1;
}
