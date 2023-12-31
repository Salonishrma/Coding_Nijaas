/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> levelOrder(TreeNode<int> * root){
    // Write your code here.
    vector<int>ans;
    queue<TreeNode<int>*>q;
    if(root==NULL)
    return ans;
    q.push(root);
    while(!q.empty()){
        int s=q.size();
        for(int i=0;i<s;i++){
        TreeNode <int>* temp=q.front();
        q.pop();
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if (temp->right != NULL) {
            q.push(temp->right);
        }
        ans.push_back(temp->data);
        }
    }
    return ans;
}
