vector<int> reverseLevelOrder(Node *root)
{
    vector<int> res;
    queue<Node*> q;
    q.push(root);
    while(q.size() > 0){
        Node* temp = q.front();
        res.push_back(temp->data);
        q.pop();
        
        if(temp->right!=NULL){
            q.push(temp->right);    
        }
        if(temp->left!=NULL){
            q.push(temp->left);    
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
