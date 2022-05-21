//Write a program to Detect loop in a linked list.
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
    bool detectLoop(Node* head)
    {
        // your code here
        if(!head || !head->next){
            return false;
        }
        Node* fast=head;
        Node* slow=head;
        do{
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }while(fast && fast->next);
        return false;
    }
