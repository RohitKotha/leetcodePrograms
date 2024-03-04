/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *temp=root;
        TreeNode*temp1;
        int l=0,r=0;
        if(root==NULL){
            return new TreeNode(val);
        }
        while(temp!=NULL){
            temp1=temp;
            l=0;
            r=0;
            if(val>temp->val){
                temp=temp->right;
                r=1;
            }
            else if(val<temp->val){
                temp=temp->left;
                l=1;
            }
            
        }
        if(r==1){
            temp1->right=new TreeNode(val);
        }
        else if(l==1){
            temp1->left=new TreeNode(val);
        }
        return root;
    }
};