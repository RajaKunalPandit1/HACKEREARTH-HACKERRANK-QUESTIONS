Output Status:

Compiler Message
Success

/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
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

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
            
            if(position == 0){
                SinglyLinkedListNode *temp = llist->next;
                delete (llist);
                return temp;
            }else{
                SinglyLinkedListNode *curr = llist;
                for(int i=1;i<position && curr!=NULL;i++){
                    curr = curr->next;
                }
                if(curr == NULL){
                    return llist;
                }else{
                    SinglyLinkedListNode *temp = curr->next;
                    curr->next = curr->next->next;
                    delete(temp);
                    return llist;
                }
            }
        
}
