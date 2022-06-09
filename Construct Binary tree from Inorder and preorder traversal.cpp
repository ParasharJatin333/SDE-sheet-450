// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int preidx=0;
    int search(int in[],int a,int b,int key){
        for(int i=a;i<=b;i++){
            if(in[i]==key){
                return i;
            }
        }
    }
    Node* Tree(int in[],int pre[],int i,int j){
        if(i>j){
            return NULL;
        }
        Node* tree=new Node(pre[preidx++]);
        if(i==j){
            return tree;
        }
        int index=search(in,i,j,tree->data);
        tree->left=Tree(in,pre,i,index-1);
        tree->right=Tree(in,pre,index+1,j);
        
        return tree;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        Node* root=Tree(in,pre,0,n-1);
        return root;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends
