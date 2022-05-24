//Deletion from a Circular Linked List.
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
void deleteNode(struct Node **head, int key)
{

// Your code goes here
Node* temp=(*head);
if(temp->data==key && temp->next==NULL){
    (*head)=NULL;
    free(temp);
}
else{
    while(temp->next!=(*head)){
        if(temp->next->data==key){
            Node* curr=temp->next;
            temp->next=curr->next;
            free(curr);
            break;
        }
        temp=temp->next;
    }
}

}

/* Function to reverse the linked list */
 void reverse(struct Node** head)
{

// Your code goes here
    Node* curr=(*head),*Next,*prev=NULL;
    while(curr->next){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    curr->next=prev;
    (*head)=prev;
}
