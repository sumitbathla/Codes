Node *removeDuplicates(Node *root)
{
    if(root==NULL || root->next==NULL){
        return root;
    }
    
    struct Node *p = root;
    struct Node *q = p->next;
    
    while(q->next!=NULL){
        if(q->data==p->data){
            p->next=q->next;
            q->next=NULL;
            q = p->next;
        } else{
            p=p->next;
            q=q->next;
        }
    }
    
    if(q->data==p->data){
        p->next=q->next;
        q->next=NULL;
        q = p->next;
    }
    
    return root;
}
