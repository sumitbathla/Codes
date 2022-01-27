vector<int> levelOrder(Node* node)
{
    vector<int> res;
    
    if(node==NULL){
        return res;
    }
    
    queue<Node*> q;
    q.push(node);
    
    while(q.size() > 0){
        Node* temp = q.front();
        res.push_back(temp->data);
        q.pop();
        
        if(temp->left!=NULL){
            q.push(temp->left);    
        }
        
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
    
    return res;
}
