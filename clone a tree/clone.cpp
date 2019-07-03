/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node *random;
};
*/
/* The function should clone the passed tree and return 
   root of the cloned tree */
  
Node* fun(Node * tree,map<Node *,Node *>&mp)
{
    if(tree==NULL)
    {
        return NULL;
    }
    if(mp.find(tree)!=mp.end())
    {
        return mp[tree];
    }
    Node *root=new Node;
    mp[tree]=root;
    root->data=tree->data;
    root->left=fun(tree->left,mp);
    root->right=fun(tree->right,mp);
    root->random=fun(tree->random,mp);
    return root;
}
Node* cloneTree(Node* tree)
{
    map<Node *,Node *>mp;
    return fun(tree,mp);
}
