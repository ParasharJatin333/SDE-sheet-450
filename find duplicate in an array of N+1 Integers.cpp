//find duplicate in an array of N+1 Integers
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
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<=n;i++)
	{
		cin>>arr[i];
	}
	map<int,int> mp;
	for(int i=0;i<=n;i++)
	{
		mp[arr[i]]++;
		if(mp[arr[i]]==2)
		{
			cout<<arr[i]<<" ";
			break;
		}
	}
}
