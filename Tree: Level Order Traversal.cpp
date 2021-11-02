Output Status:

Compiler Message
Success

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
        
        queue<Node *>q;
        q.push(root);
        
        while (q.empty() == false) {
            
            Node *curr = q.front();
            q.pop();
            
            cout<< curr->data << " ";
            
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            
            if(curr->right!=NULL){
                q.push(curr->right);
            }
            
        }
        
    }

}; //End of Solution
