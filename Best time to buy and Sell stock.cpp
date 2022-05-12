//Best time to buy and Sell stock
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
int maxProfit(vector<int>& v) {
        int n=v.size();
        int final_val=0;
        for(int i=0;i<n;i++){
            int maxi=INT_MIN;
            for(int j=i+1;j<n;j++){
                if(v[j]>maxi){
                    maxi=v[j];
                }
            }
            if(maxi>v[i]){
                final_val=max(maxi-v[i],final_val);
            }
        }
        return final_val;
    }
