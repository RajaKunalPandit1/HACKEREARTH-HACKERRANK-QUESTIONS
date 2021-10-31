Output Status:

Compiler Message
Success


// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    
    
    SinglyLinkedListNode *curr = new SinglyLinkedListNode(data);
    
    SinglyLinkedListNode *temp = head;
    
    if(head == NULL){
        return curr;
    }
    
    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next = curr;
    curr->next = NULL;
    
    return head;

}
