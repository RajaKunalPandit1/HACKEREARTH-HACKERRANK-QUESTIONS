Output Status:

Compiler Message
Success


/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    
    vector<int> res;
    
    SinglyLinkedListNode *curr = llist;
    while(curr!=NULL){
        res.push_back(curr->data);
        curr = curr->next;
    }
    
    int n = res.size();
    
    return res[n-positionFromTail-1];
    
}
