#include <iostream>
using namespace std;

typedef int ET;
typedef struct Node{
	ET d;
	struct Node *le;
	struct Node *ri;
}Node, *Link;

Link newNode(Link node, int n){

	node = new Node();
	node->d = n;
	node->le = node->ri = NULL;
	return node;

}

void Insert(Link &p, int n){

	if(p==NULL){
		p = newNode(p, n);
		return;
	}else{
		if(p->d>n){
			Insert(p->le, n);
		}else{
			Insert(p->ri, n);
		}
	}

}

int Create(Link &node, ET num[], int N){

	int i;
	Node *p;

	i=0;
	node = newNode(node, num[i]);
	p = node;
	i++;
	while(i<N){
		Insert(p, num[i]);
		i++;
	}

	return 1;

}

void PostOrder(Link node){

	if(node->le!=NULL){
		PostOrder(node->le);
	}
	if(node->ri!=NULL){
		PostOrder(node->ri);
	}
	cout<<node->d<<" ";

}

int Destroy(Link &node){

	if(node->le!=NULL){
		Destroy(node->le);
	}
	if(node->ri!=NULL){
		Destroy(node->ri);
	}
	delete node;

	return 0;

}

int main(){

	Node *node;
	int N, *num, flag;

	cin>>N;
	num = new int[N];
	flag=0;
	for(int i=0; i<N; i++){
		cin>>num[i];
		if(i!=0 && num[i]>=num[0]){
			flag=1;
		}
		if(flag==1 && num[i]<num[0]){
			cout<<"NO";
			flag=-1;
		}
	}
	if(flag!=-1){
		cout<<"YES\n";
		Create(node, num, N);
		PostOrder(node);
		Destroy(node);
	}

	delete[] num;
	return 0;

}
