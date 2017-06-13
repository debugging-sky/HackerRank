/*

Tree: Level Order Traversal

https://www.hackerrank.com/challenges/tree-level-order-traversal

You are given a pointer to the root of a binary tree. You need to print the level order traversal of this tree. In level order traversal, we visit the nodes level by level from left to right. You only have to complete the function. For example:

     1
      \
       2
        \
         5
        /  \
       3    6
        \
         4  

For the above tree, the level order traversal is 1 -> 2 -> 5 -> 3 -> 6 -> 4.

Input Format

You are given a function,

void levelOrder(node * root) {

}

Constraints

1 Nodes in the tree 500

Output Format

Print the values in a single line separated by a space.

Sample Input

     1
      \
       2
        \
         5
        /  \
       3    6
        \
         4  

Sample Output

1 2 5 3 6 4

Explanation

We need to print the nodes level by level. We process each level from left to right.
Level Order Traversal: 1 -> 2 -> 5 -> 3 -> 6 -> 4.

*/


/*
struct node
{
    int data;
    node* left;
    node* right;
}*/
//Node pointer type queue
queue <node *> q;
 

//used for keeping track of current node being used
node * pointer;

void levelOrder(node * root) {
   
    if(root==NULL)
        return;
    
//Push the root node to the queue that is the starting node
    q.push(root);
    
    
// this function will do the actual BFS
    while(q.empty()==false){
        
        
//Queueu uses FIFO ----> First in First Out Technique
        
        pointer=q.front();
        q.pop();
        
//We push left node then right so that at the time of pop we get left node out first 
// accordong to FIFO technique and we print data of the node respectively        
        
        cout<<pointer->data<<" ";
        
        if(pointer->left!=NULL)
        q.push(pointer->left);
        
        
        if(pointer->right!=NULL)
        q.push(pointer->right);
        
    }
    
    
  
}
