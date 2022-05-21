//Add “1” to a number represented as a Linked List.
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
Node* reverse(Node* head){
        Node* prev=NULL,*curr=head,*Next;
        while(curr){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        
        head=reverse(head);
        int carry=1;
        Node* temp=head;
        while(temp){
            int n=temp->data+carry;
            temp->data=n%10;
            n=n/10;
            carry=n%10;
            if(temp->next){
                temp=temp->next;
            }
            else{
                break;
            }
        }
        if(carry==1){
            Node* newNode=new Node(carry);
            temp->next=newNode;
        }
        return reverse(head);
    }
