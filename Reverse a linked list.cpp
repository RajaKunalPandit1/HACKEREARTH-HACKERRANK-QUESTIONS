Output Status:

Compiler Message
Success



/*
 * Complete the 'reverse' function below.
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

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    
    SinglyLinkedListNode *curr = llist, *prev = NULL, *nex;
    
    while(curr!=NULL){
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    return prev;
    
}

