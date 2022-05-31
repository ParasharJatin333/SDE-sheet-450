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
vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
//Your code here
    map<vector<int> ,int> mp;
    for(int i=0;i<row;i++){
        vector<int> v;
        for(int j=0;j<col;j++){
            v.push_back(M[i][j]);
        }
        mp[v]++;
    }
    vector<vector<int> > v;
    for(int i=0;i<row;i++){
        vector<int> v1;
        for(int j=0;j<col;j++){
            v1.push_back(M[i][j]);
        }
        if(mp[v1]>=1){
            v.push_back(v1);
            mp[v1]=0;
        }
    }
    return v;
}
