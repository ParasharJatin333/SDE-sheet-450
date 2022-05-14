//Reverse a String
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
void swap_char(char *a,char *b){
	char temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	string s;
	cin>>s;
	int n=s.length();
	for(int i=0;i<n/2;i++){
		swap_char(&s[i],&s[n-i-1]);
	}
	for(int i=0;i<n;i++){
		cout<<s[i];
	}
}
