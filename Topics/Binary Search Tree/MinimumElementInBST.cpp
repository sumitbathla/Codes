int minValue(Node* root)
{
    if(root->left!=NULL){
        return minValue(root->left);
    } else{
        return root->data;
    }
}
z
