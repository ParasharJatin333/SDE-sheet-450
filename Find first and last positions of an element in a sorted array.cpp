//Find first and last positions of an element in a sorted array
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
  int first_occur(vector<int> &arr,int n,int x){
      int index=-1;
      for(int i=0;i<n;i++){
          if(arr[i]==x){
              index=i;
              break;
          }
      }
      return index;
  }
  int last_occur(vector<int> &arr,int n,int x){
      int index=-1;
      for(int i=n-1;i>=0;i--){
          if(arr[i]==x){
              index=i;
              break;
          }
      }
      return index;
  }
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        if(arr[0]>x || arr[n-1]<x){
            return {-1};
        }
        vector<int> v;
        v.push_back(first_occur(arr,n,x));
        if(v[0]==-1){
            return v;
        }
        v.push_back(last_occur(arr,n,x));
        return v;
    }
