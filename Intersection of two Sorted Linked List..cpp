//Intersection of two Sorted Linked List.
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
Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* head11=head1;
    Node* head22=head2;
    Node* head=NULL,*tail=NULL;
    while(head11!=NULL && head22!=NULL){
        if(head11->data==head22->data){
            Node* newNode=new Node(head11->data);
            if(head==NULL){
                head=newNode;
                tail=newNode;
            }
            else{
                tail->next=newNode;
                tail=tail->next;
            }
            head11=head11->next;
            head22=head22->next;
        }
        else if(head11->data < head22->data){
            head11=head11->next;
        }
        else if(head11->data > head22->data){
            head22=head22->next;
        }
    }
    return head;
}
