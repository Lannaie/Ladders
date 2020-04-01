#include<iostream>
using namespace std;

typedef struct pNode{
	int num;
	struct pNode* next;
}pNode;
typedef struct nNode{
	int tot;
	pNode* first;
	struct nNode* next;
}nNode;

nNode* InitN(){

	nNode *node = new nNode();

	node->tot = 0;
	node->first = NULL;
	node->next = NULL;
	return node;

}

pNode* InitP(int num){

	pNode *node = new pNode();

	node->num = num;
	node->next = NULL;
	return node;

}

void Destroy(nNode *node){

	if(!node){
		return;
	}

	for(nNode *p = node; p!=NULL;){
		for(pNode *q = p->first; q!=NULL;){
			pNode *m = q->next;
			delete q;
			q = m;
		}
		nNode *q = p->next;
		delete p;
		p = q;
	}

}

int main(){

	int N, num, i, j, k, flag;
	nNode *node, *p, *q;

	cin>>N;
	node = InitN();
	k=-1;
	i=j=flag=0;	//n为每个数字的位置,flag判断是否是已有家庭的成员
	while(i<N){
		cin>>num;
		j++;
		if(k!=i){
			k=-1;
			for(p=node; p!=NULL; p = p->next){
				pNode *m, *n;
				for(m=node->first; m!=NULL; m=m->next){
					if(m->num==num && num!=-1){
						flag==1;
						k=i;
						break;
					}
				}
				if(flag){
					break;
				}
				q = p;
			}
		}else{
			for(pNode *m=p->first; m!=NULL; m=m->next){
				if()	
			}
		}
	}

	return 0;

}
