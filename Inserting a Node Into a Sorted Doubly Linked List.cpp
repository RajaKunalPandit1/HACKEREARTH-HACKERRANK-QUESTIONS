Output Status:

Compiler Message
Success


/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode *temp =  new DoublyLinkedListNode(data);
    
    if(llist == NULL){
        return temp;
    }else if(llist->data>=temp->data){
        temp->next = llist;
        llist->prev = temp;
        temp->prev = NULL;
        return temp;
    }else{
        DoublyLinkedListNode* curr =  sortedInsert(llist->next, data);
        llist->next = curr;
        curr->prev = llist;
        return llist;   
    }
    
}
