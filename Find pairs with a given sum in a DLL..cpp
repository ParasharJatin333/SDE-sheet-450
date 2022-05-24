//Find pairs with a given sum in a DLL.
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
void count_pair(Node* node,int key,vector<pair<int,int> > &vec){
	Node* head=node;
	Node* tail;
	while(node->next!=NULL){
		node=node->next;
	}
	tail=node;
	while(head->data > tail->data){
		if(head->data+tail->data==key){
			vec.push_back(makae_pair(head->data,tail->data));
			head=head->next;
			tail=tail->prev;
		}
		else if( head->data+tail->data > key){
			tail=tail->prev;
		}
		else{
			head=head->next;
		}
	}
}
