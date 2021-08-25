bool detectLoop(Node* head)
{
    if(head==NULL || head->next==NULL){
        return false;
    }
    
    struct Node* slow=head;
    struct Node* fast=head;
    
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    
    return false;
}
