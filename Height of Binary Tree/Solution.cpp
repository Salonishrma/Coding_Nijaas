int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
    if(root==0){
        return 0;
    }
    else{
       int lheight=heightOfBinaryTree(root->left);
      int rheight=heightOfBinaryTree(root->right);
       if(lheight>rheight){
           return (lheight+1);
       }
       else{
           return(rheight+1);
       }
    }
}
