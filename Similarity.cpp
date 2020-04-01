#include <iostream>
#include <iomanip>
using namespace std;

typedef struct Node{
	int num;
	struct Node *next;
}Node, *Link;
typedef struct{
	int len;
	struct Node *first;
}List;

void Insert(Link &node, int num){

	if(node==NULL){
		node = new Node();
		node->num = num;
		node->next = NULL;
		return;
	}else{
		Insert(node->next, num);
	}

}

List* newList(int n){

	List *nodes = new List[n];
	Link p = new Node;
	int num;

	p->num=0;
	p->next = NULL;
	for(int i=0; i<n; i++){
		cin>>nodes[i].len;
		nodes[i].first = p;
		for(int j=0; j<nodes[i].len; j++){
			cin>>num;
			Insert(nodes[i].first->next, num);
		}
	}
	return nodes;

}

void Dewei(List &L1, List &L2, int flag, int &n){

	Node *p, *q, *s;
	int num;

	num=0;
	p = L1.first->next;
	for(int i=0; i<L1.len; i++){
		int j;
		if(flag==0){
			j=i+1;
			s = p;
		}
		else{
			j=0;
			s = L2.first;
		}
		q = s->next;
		for(; j<L2.len; j++){
			if(p->num==q->num){
				num++;
				if(flag==0){
					q = s;
					Link r = q->next;
					q->next = q->next->next;
					delete r;
					r = NULL;
				}
			}
			s = q;
			q = q->next;
		}
		p = p->next;
	}
	n = num;
	L2.len-=num;

}

int Destroy(List* &nodes, int n){

	for(int i=0; i<n; i++){
		Link p = nodes[i].first;
		for(int j=0; j<=nodes[i].len; j++){
			Link q = p->next;
			delete p;
			p = q;
		}
	}

	delete[] nodes;
	return 0;

}

int main(){

	List *nodes;
	int i, N1, N2;

	cout<<setiosflags(ios::fixed)<<setprecision(2);
	cin>>N1;
	nodes = newList(N1);
	i=0;
	while(i<N1){Link a = nodes[i].first->next;
		N2 = 0;while(a!=NULL){cout<<a->num<<" ";a=a->next;}cout<<endl;
		Dewei(nodes[i], nodes[i], 0, N2);cout<<nodes[i].len<<endl;
		i++;
	}
	N2 = 0;
	cin>>N2;
	int num[N2][2];
	i=0;
	while(i<N2){
		cin>>num[i][0]>>num[i][1];
		num[i][0]--;
		num[i][1]--;
		i++;
	}
	i=0;
	while(i<N2){
		N1 = 0;
		Dewei(nodes[num[i][0]], nodes[num[i][1]], 1, N1);//cout<<N1<<" "<<nodes[num[i][0]].len<<" "<<nodes[num[i][1]].len<<endl;
		cout<<N1/(nodes[num[i][0]].len+nodes[num[i][1]].len)<<endl;
		i++;
	}
	Destroy(nodes, N1);

	return 0;

}
