#include <iostream>
#include <cmath>
using namespace std;
typedef struct Node{
	int chara;
	int time;
	struct Node *next;
}Node, *Link;
/*
int InitNodeList(Link &node, int N){

	node = new Node[N];

	node->chara = 0;
	node->time=0;
	node->next = NULL;
	return 1;

}
*/
int DestroyNodes(Link &node){

	while(node!=NULL){
		Link p=node;
		node = node->next;
		delete p;
	}
	return 1;

}

int main(){

	int N;
	char c;
	int i=-1, j=0, sum=0, charac=0, time=0;
	char *input = new char();
	Node *node = new Node();

	cin>>N;
	while(i<N){
		c = getchar();
		if(c=='\n'){
			int n=0;
			int k=j-1;
			while(k>-1){
				if(input[k]-48>-1 && input[k]-48<10){
					sum+=(input[k]-48)*pow(10, n);
					n++;
				}else if(input[k]==' ' || k==0){
					Node *q = node;
					Node *p = q->next;
					while(p!=NULL){
						if(p->chara==sum){
							p->time++;
							sum=0;
						}else{
							q = p;
							p = p->next;
						}
					}
					if(sum!=0){
						Node *node1 = new Node();
						node1->chara = sum;
						sum=0;
						node1->time = 1;
						node1->next = NULL;
						q->next = node1;
					}
					n=0;
				}
				k--;
			}
			i++;
			j=0;
			input = new char();
		}
		input[j] = c;
		j++;
	}
	Node *p = node->next;
	while(p!=NULL){
		if(p->time>time){
			time = p->time;
			charac = p->chara;
		}else if(p->time == time){
			if(p->chara>charac){
				charac = p->chara;
			}
		}
		p = p->next;
	}
	cout<<charac<<" "<<time<<endl;
	if(DestroyNodes(node)==1)cout<<"销毁成功。";
	delete input;
	return 0;

}
