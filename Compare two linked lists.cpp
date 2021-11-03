Output Status:

Compiler Message
Success

// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode *curr1 = head1;
    SinglyLinkedListNode *curr2 = head2;
    
    bool flag = true;
    
    while(curr1!=NULL && curr2!=NULL){
        if(curr1->data!= curr2->data){
            flag = false;
            break;
        }else{
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
    }
    
    if((curr1 == NULL && curr2!= NULL) || (curr1!=NULL && curr2==NULL)){
            flag = false;
        }
    return flag;
}
