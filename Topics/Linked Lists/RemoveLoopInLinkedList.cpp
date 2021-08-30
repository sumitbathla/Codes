void removeLoop(Node* head
{
    if(head==NULL || head->next==NULL){
        return;
    }
    
    struct Node* slow = head;
    struct Node* fast = head;
    
    while(fast->next!=NULL && slow && fast && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow==fast){
            break;
        }
    }

    if(slow==fast){
        slow = head;
        if(slow==fast){
            while(fast->next!=slow){
                fast = fast->next;
            }
        } else{
            while(slow->next!=fast->next){
                slow = slow->next;
                fast = fast->next;
            }
        }
        fast->next = NULL;
    }
    return;
}
