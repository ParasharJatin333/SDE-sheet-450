//Merge 2 sorted arrays without using Extra space.
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
void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            vector<int> v;
            for(int i=0;i<n;i++)
            {
                v.push_back(arr1[i]);
            }
            for(int i=0;i<m;i++)
            {
                v.push_back(arr2[i]);
            }
            sort(v.begin(),v.end());
            int j=0;
            for(int i=0;i<n;i++)
            {
                arr1[i]=v[j++];
            }
            for(int i=0;i<m;i++)
            {
                arr2[i]=v[j++];
            }
        } 
