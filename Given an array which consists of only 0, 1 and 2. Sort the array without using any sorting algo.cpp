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
 void sort012(int a[], int n)
    {
        // code here 
        int p=0,q=0,r=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                p+=1;
            }
            else if(a[i]==1)
            {
                q+=1;
            }
            else{
                r+=1;
            }
        }
        int i=0;
        while(p)
        {
            a[i++]=0;
            p=p-1;
        }
        while(q)
        {
            a[i++]=1;
            q=q-1;
        }
        while(r)
        {
            a[i++]=2;
            r=r-1;
        }
    }
