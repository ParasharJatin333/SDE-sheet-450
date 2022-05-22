//Split a Circular linked list into two halves.
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

void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    Node* slow=head,*fast=head;
   while(fast->next!=head && fast->next->next!=head){
       slow=slow->next;
       fast=fast->next->next;
   }
   Node* temp=slow->next;
  if(fast->next!=head){
      fast=fast->next;
  }
  slow->next=head;
  (*head1_ref)=head;
  fast->next=temp;
  (*head2_ref)=temp;
}
