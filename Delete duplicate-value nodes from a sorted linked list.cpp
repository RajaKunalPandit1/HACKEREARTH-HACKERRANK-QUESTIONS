Output Status:

Compiler Message
Success

/*
 * Complete the 'removeDuplicates' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
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

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
        
    if(llist == NULL){
        return NULL;
    }
    SinglyLinkedListNode *curr = llist;
    
    while(curr!= NULL && curr->next != NULL){
        if(curr->data == curr->next->data){
            SinglyLinkedListNode *temp = curr->next;
            curr->next = curr->next->next;
            delete(temp);
        }else{
            curr = curr->next;
        }
    }
    return llist; 
}
