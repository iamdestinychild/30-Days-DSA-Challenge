class Solution {
public:


TreeNode* minval(TreeNode* root)
{
    TreeNode* temp=root;


    // finding the minimum value by going to the extreme left of BST


    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
   
}


    TreeNode* deleteNode(TreeNode* root, int x) {
         
           //base case
         if(root==NULL){
        return root;
    }


    // Going to the left of BST if the value to delete(x) is lower than the root value


     if (x < root->val) {
        root->left = deleteNode(root->left, x);
    }


        // Going to the right of BST if the value to delete(x) is higer than the root value


    else if (x > root->val) {
        root->right = deleteNode(root->right, x);
    }
    else{


        // 3 cases when we have to delete a node


        //case 1: When the node to delete is a leaf node(having no child)
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }


       //case 2:  When the node to delete has one child


       //case 2.1: When the node to delete has only left child
        if(root->left!=NULL && root->right==NULL){
            TreeNode* temp=root->left;                                //storing value of root's child
            delete root;
            return temp;
        }
       
      //case 2.2: When the node to delete has only right child
     if(root->right!=NULL && root->left==NULL){
          TreeNode* temp2=root->right;                                //storing value of root's child
            delete root;
            return temp2;
        }
       
        //case 3: When the node to delete has two childs
        if(root->right!=NULL && root->left!=NULL){


            int mini=minval(root->right)->val;                        //storing minimum value in variable mini
            root->val=mini;                                           //copying that value in root
           root->right= deleteNode(root->right,mini);
            return root;
        }
       
    }
    return root;
    }
};
