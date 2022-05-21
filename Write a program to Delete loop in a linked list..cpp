//Write a program to Delete loop in a linked list.
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
   void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node* slow=head;
        Node* fast=head;
        do{
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }while(fast && fast->next);
        if(slow!=fast){
            return ;
        }
        slow=head;
        if(slow==fast){
            while(fast->next!=slow){
                fast=fast->next;
            }   
        }
       else{
           while(slow->next!=fast->next){
            
            slow=slow->next;
            fast=fast->next;
        }
       }
        fast->next=NULL;
    }
