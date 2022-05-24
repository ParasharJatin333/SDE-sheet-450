//Delete nodes having greater value on right 
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
    Node *compute(Node *head)
    {
        // your code goes here
        Node* temp=head,*temp1;
        while(temp->next){
            if(temp->data < temp->next->data){
                temp1=temp->next;
                temp->data=temp->next->data;
                temp->next=temp->next->next;
                temp=head;
                free(temp1);
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
