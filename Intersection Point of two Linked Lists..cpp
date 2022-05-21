//Intersection Point of two Linked Lists.
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
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    unordered_map<Node *,int> mp;
    Node* temp=head1;
    while(temp){
        mp[temp]=1;
        temp=temp->next;
    }
    while(head2){
        if(mp[head2]==1){
            return head2->data;
        }
        head2=head2->next;
    }
    return -1;
}

