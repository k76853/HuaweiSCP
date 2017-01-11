#include <iostream>
using namespace std;
typedef struct node{
    int val;
	node* next;
	node(int v){
	    val=v;
		next=NULL;
	}
}NODE;
NODE* BubbleSort(NODE* arr){
	if(!arr){
		return NULL;
	}
	NODE* head=arr;
	while(arr){
	    NODE* tmp=arr->next;
		while(tmp){
			if(arr->val>tmp->val){
				arr->val=arr->val+tmp->val;
				tmp->val=arr->val-tmp->val;
				arr->val=arr->val-tmp->val;
			}
			tmp=tmp->next;
		}
		arr=arr->next;
	}
	return head;
}
NODE* gen(int t){
	NODE* r=new NODE(0);
	NODE* h=r;
	for(int i=t;i>0;--i){
	    NODE* t=new NODE(i);
		r->next=t;
		r=r->next;
	}	
	return h;
}
void printfn(NODE* arr){
	while(arr){
		cout<<arr->val;
		arr=arr->next;
	}
	cout<<endl;
}
int main(){
    NODE *a=gen(100);
	printfn(a);
	NODE *r=BubbleSort(a);
	printfn(r);
}