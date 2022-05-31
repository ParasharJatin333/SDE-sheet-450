//
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ft first
#define sc second
#define pb push_back
#define ins insert
#define all(v) v.begin(), v.end()
#define Sort(v) sort(all(v))
#define s(a, n) sort(a, a + n)
#define f1(i,a,b) for(ll i=a;i<b;i++)
#define f2(i,a,b,c) for(ll i=a;i<b;i+=c)
#define f3(i,a,b) for(ll i=a;i>=b;i--)
#define f4(i,a,b,c) for(ll i=a;i>=b;i-=c)
#define jatin(t) int t; cin >> t; while(t--)
const int N = 1e5+2, MOD = 1e9+7;
//int array[N];
//cout << (condition ? "YES\n" : "NO\n");
// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Node{
    public:
    Node* children[26];
    bool isLeaf;
    int count;
    Node(){
        for(int i=0;i<26;i++){
          children[i]=NULL;
        }
        count=0;
        isLeaf=false;
    }
};

class Solution
{
    public:
    void insert(Node* root,string s){
        Node* node=root;
        for(int i=0;i<s.length();i++){
            if(node->children[s[i]-'a']==NULL){
                Node* temp=new Node();
                node->children[s[i]-'a']=temp;
            }
            node->children[s[i]-'a']->count++;
            node=node->children[s[i]-'a'];
            
        }
        node->isLeaf=true;
    }
    string search(Node* root,string s1){
        Node* node=root;
        string str;
        for(int i=0;i<s1.length();i++){
            str.push_back(s1[i]);
            if(node->children[s1[i]-'a']->count==1){
                break;
            }
            node=node->children[s1[i]-'a'];
            
        }
        return str;
    }
    vector<string> findPrefixes(string arr[], int n)
    {
        //code here
        vector<string> v;
        Node* root=new Node();
        for(int i=0;i<n;i++){
            insert(root,arr[i]);
        }
        for(int i=0;i<n;i++){
            v.push_back(search(root,arr[i]));   
        }
        return v;
    }
    
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        Solution ob;
        vector<string> ans = ob.findPrefixes(arr, n);
        
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] <<" ";


        cout << "\n";

    }

    return 0;
}
  // } Driver Code Ends
