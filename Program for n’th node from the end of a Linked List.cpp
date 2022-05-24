//Program for n’th node from the end of a Linked List
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
int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node* temp=head;
    int node=0;
    while(temp!=NULL)
    {
        node++;
        temp=temp->next;
    }
    if(node<n)
    {
        return -1;
    }
    node=node-n;
    for(int i=0;i<node;i++)
    {
        head=head->next;
    }
    return head->data;
}
