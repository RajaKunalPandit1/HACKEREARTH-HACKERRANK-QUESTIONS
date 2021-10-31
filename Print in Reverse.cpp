Output Status:

Compiler Message
Success

/*
 * Complete the 'reversePrint' function below.
 *
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

void reversePrint(SinglyLinkedListNode* llist) {
    
    vector<int> res;
    
    SinglyLinkedListNode *curr = llist;
    
    while(curr!=NULL){
        res.push_back(curr->data);
        curr = curr->next;
    }
    
    reverse(res.begin(),res.end());
    
    for(int i=0;i<res.size();i++){
        cout << res[i] << endl;
    }  
    
}

// Another Solution Using Deque;


/*
 * Complete the 'reversePrint' function below.
 *
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

void reversePrint(SinglyLinkedListNode* llist) {
        
        deque<int> dq;
        
        SinglyLinkedListNode *curr = llist;
        
        while(curr!=NULL){
            dq.push_front(curr->data);
            curr = curr->next;
        }
        
        for(auto x:dq){
            cout<< x << endl;
        }    
}

// Another Solution by swapping the nodes

ListNode* reverseList(ListNode* head) {
     
        ListNode *pre = NULL, *cur = head, *nex;
        
        while(cur != NULL){
            nex = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nex;
        }
        
        return pre;
        
    }
