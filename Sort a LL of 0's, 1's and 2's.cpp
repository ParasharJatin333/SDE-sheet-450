//Sort a LL of 0's, 1's and 2's
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
Node* segregate(Node *head) {
        
        // Add code here
        map<int,int> mp;
        Node* temp=head;
        while(temp!=NULL)
        {
            mp[temp->data]++;
            temp=temp->next;
        }
        temp=head;
        map<int,int> :: iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            for(int i=0;i<it->second;i++)
            {
                temp->data=it->first;
                temp=temp->next;
            }
        }
        return head;
    }
