void findpath(Node* root,vector<int> &v,vector<vector<int>> &vec)
 {
     if(!root)
     {
         return;
     }
     v.push_back(root->data);
     if(!root->left && !root->right)
     {
         vec.push_back(v);
     }
     findpath(root->left,v,vec);
     findpath(root->right,v,vec);
     v.pop_back();
 }
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        vector<vector<int>> vec;
    vector<int> v;
    findpath(root,v,vec);
    int n=vec[0].size();
    int final_sum=INT_MIN;
    for(int i=0;i<vec.size();i++)
    {
        int sum=0;
        if(vec[i].size()>=n)
        {
            n=vec[i].size();
           for(int j=0;j<vec[i].size();j++)
           {
               sum+=vec[i][j];
           }
           if(sum>final_sum)
           {
               final_sum=sum;
           }
        }
    }
    return final_sum;
    }

