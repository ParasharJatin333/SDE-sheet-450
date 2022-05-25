// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool checkcycle(int src,vector<int> adj[],vector<bool> &vis,vector<bool> &stack){
        stack[src]=1;
       vis[src]=1;
            vector<int> :: iterator it;
            for(it=adj[src].begin();it!=adj[src].end();it++){
                if(!vis[*it] && checkcycle(*it,adj,vis,stack)){
                    return true;
                }
                if(stack[*it]){
                    return true;
                }
            }
            stack[src]=0;
            return false;
        
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool> stack(V,0);
        vector<bool> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i] && checkcycle(i,adj,vis,stack)){
                return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends