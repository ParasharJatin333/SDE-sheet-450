//Merge Intervals
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
vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         vector<vector<int> > res;
         sort(intervals.begin(),intervals.end());
         res.push_back(intervals[0]);
         int k=0;
         for(int i=1;i<intervals.size();i++)
         {
             if(res[k][1] >=intervals[i][0])
             {
                 res[k][1]=max(res[k][1],intervals[i][1]);
             }
             else
             {
                 res.push_back(intervals[i]);
                 k+=1;
             }
         }
         return res;
    }
