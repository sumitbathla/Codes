Node *mergeTwo(Node *a, Node *b){
    Node *temp = new Node(0);
    Node *res = temp;
    while(a && b){
        if(a->data < b->data){
            temp->bottom = a;
            a = a->bottom;
            temp = temp->bottom;
        } else{
            temp->bottom = b;
            b = b->bottom;
            temp = temp->bottom;
        }
    }
    if(a){
        temp->bottom = a;
    } else if(b){
        temp->bottom = b;
    }
    return res->bottom;
}
Node *flatten(Node *root)
{
   if(root==NULL | root->next==NULL){
       return root;
   }
   root->next = flatten(root->next);
   root = mergeTwo(root, root->next);
   return root;
}
