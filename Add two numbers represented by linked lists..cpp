//Add two numbers represented by linked lists.
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
Node* reverse(Node* node){
        Node* prev=NULL,*curr=node,*Next;
        while(curr){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first=reverse(first);
        second=reverse(second);
        int carry=0;
        Node* head1=NULL,*tail=NULL;
        while(first && second){
            int n=first->data+second->data+carry;
            Node* newNode=new Node(n%10);
            n=n/10;
            carry=n%10;
            if(head1==NULL){
                head1=newNode;tail=newNode;
            }
            else{
                tail->next=newNode;
                tail=tail->next;
            }
            first=first->next;
            second=second->next;
        }
        while(first){
            int n=first->data+carry;
            Node* newNode=new Node(n%10);
            n=n/10;
            carry=n%10;
            tail->next=newNode;
            tail=tail->next;
            first=first->next;
        }
        while(second){
            int n=second->data+carry;
            Node* newNode=new Node(n%10);
            n=n/10;
            carry=n%10;
            tail->next=newNode;
            tail=tail->next;
            second=second->next;
        }
        if(carry!=0){
            Node* newNode=new Node(carry);
            tail->next=newNode;
        }
        return reverse(head1);
    }
