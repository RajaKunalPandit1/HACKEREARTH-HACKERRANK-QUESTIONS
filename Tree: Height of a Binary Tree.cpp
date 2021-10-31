Output Status:

Compiler Message
Success

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        
        int ls = 0;
        int rs = 0;
        
        if(root->left!=NULL){
            ls = 1+height(root->left);
        }
        
        if(root->right != NULL){
            rs = 1+height(root->right);
        }
        
        return max(ls,rs);
        
    }


