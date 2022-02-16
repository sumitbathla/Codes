Node* insert(Node* root, int Key)
{
    if(root==NULL){
        return new Node(Key);
    }
    // if(root->data==Key){
    //     return 0;
    // }
    if(root->data>Key){
        root->left = insert(root->left, Key);
    } else if(root->data<Key){
        root->right= insert(root->right, Key);
    } else{
        
    }
    return root;
