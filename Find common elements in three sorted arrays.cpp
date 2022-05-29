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
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            map<int,int> a,b,c;
            vector<int> v;
            set<int> s;
            for(int i=0;i<n1;i++)
            {
                a[A[i]]++;
            }
            for(int i=0;i<n2;i++)
            {
                b[B[i]]++;
            }
            for(int i=0;i<n3;i++)
            {
                c[C[i]]++;
            }
           
            for(int i=0;i<n1;i++)
            {
                if(a[A[i]]>=1 && b[A[i]]>=1 && c[A[i]]>=1)
                {
                    s.insert(A[i]);
                }
            }
            set<int> :: iterator it;
            for(it=s.begin();it!=s.end();it++){
                v.push_back(*it);
            }
            return v;
        }
