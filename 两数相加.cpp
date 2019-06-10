#include<cstdio>
#include<iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
	struct ListNode *p,*q,*t,*r;
	struct ListNode* l3=NULL;
	int flag=0,tag=0;
	p=l1;
	q=l2;
	t=r=(struct ListNode*)malloc(sizeof(struct ListNode));
	
	while(p!=NULL&&q!=NULL){
		if(tag==0){
			l3=r;
			tag++;
		}
		else 	t->next=r;
		t=r;
		t->val=0;
		if(flag==1){
			t->val++;
			flag--;
		}
		if(p->val+q->val+t->val<10){
			t->val=t->val+p->val+q->val; 
		}else{
			t->val=(t->val+p->val+q->val)%10;
			flag++;
		}
		p=p->next;q=q->next;
		r=(struct ListNode*)malloc(sizeof(struct ListNode));
	}
	while(p!=NULL){
		if(tag==0){
			l3=r;
			tag++;
		}else  t->next=r;
		t=r;
		t->val=0;
		if(flag==1){
			t->val++;
			flag--;
		}
		if(p->val+t->val<10){
			t->val=t->val+p->val;
		}else{
			t->val=(t->val+p->val)%10;
			flag++;
		}
		p=p->next;
		r=(struct ListNode*)malloc(sizeof(struct ListNode));
	}
	while(q!=NULL){
		if(tag==0){
			l3=r;
			tag++;
		}else t->next=r;
		t=r;
		t->val=0;
		if(flag==1){
			t->val++;
			flag--;
		}
		if(q->val+t->val<10){
			t->val=t->val+q->val;
		}else{
			t->val=(t->val+q->val)%10;
			flag++;
		}
		q=q->next;
		r=(struct ListNode*)malloc(sizeof(struct ListNode));
	}
	if(flag==1){
		t->next=r;
		t=r;
		t->val=1;
		t->next=NULL;
	}else{
		t->next=NULL;
	}
	return l3;
}


