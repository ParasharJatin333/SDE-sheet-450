//Write a Program to reverse the Linked List. (Iterative)
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
  struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* Next=head->next,*curr=head,*prev=NULL;
        if(!head || !head->next){
            return head;
        }
        while(Next){
            if(curr==head){
                head->next=NULL;
                curr=Next;
                prev=head;
            }
            else{
                Next=Next->next;
                curr->next=prev;
                prev=curr;
                curr=Next;
            }
        }
        head=prev;
        return head;
    }
