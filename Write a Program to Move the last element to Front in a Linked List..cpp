//Write a Program to Move the last element to Front in a Linked List.
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
class Node{
	public:
		int data;
		Node* next;
		Node(int data){
			this->data=data;
			next=NULL;
		}
};
Node* takeinput(){
	int data;cin>>data;
	Node* head=NULL,*tail=NULL;
	while(data!=-1){
		Node* newNode=new Node(data);
		if(head==NULL){
			head=newNode;
			tail=newNode;
		}
		else{
			tail->next=newNode;
			tail=tail->next;
		}
		cin>>data;
	}
	return head;
}
Node* move_to_first(Node *head){
	Node* temp1=NULL,*temp2=head;
	while(temp2->next!=NULL){
		temp1=temp2;
		temp2=temp2->next;
	}
	temp1->next=NULL;
	temp2->next=head;
	return temp2;
}
void traverse(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main(){
	Node* head=takeinput();
	traverse(head);
	cout<<endl;
	Node* newhead=move_to_first(head);
	cout<<"updated list : ";
	traverse(newhead);
}
