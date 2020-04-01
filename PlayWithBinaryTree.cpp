#include <iostream>
#include <queue>
using namespace std;

typedef struct Node{
	int data;
	struct Node *left, *right;
}*BiTree;

BiTree Create(int pre[], int mid[], int len){
	if(len<=0){
		return NULL;
	}

	BiTree bt = new Node();

	bt->data = 0;
	int i;
	for(i=0; mid[i]!=pre[0] && i<len; i++);
	i++;
	bt->left = Create(pre+1, mid, i-1);
	bt->right = Create(pre+i, mid+i, len-i);
	return bt;

}

void Seq(BiTree bt){

	queue<BiTree> q;
	int flag = 0;

	q.push(bt);
	while(q.empty()!=true){
		BiTree node  = q.front();
		q.pop();
		if(!flag){
			cout<<node->data;
			flag = 1;
		}else{
			cout<<" "<<node->data;
		}
		if(node->right){
			q.push(node->right);
		}
		if(node->left){
			q.push(node->left);
		}
	}

}

int Destroy(BiTree &bt){

	if(!bt){
		return 0;
	}
	if(bt->left){
		Destroy(bt->left);
	}
	if(bt->right){
		Destroy(bt->right);
	}
	delete bt;
	return 1;

}

int main(){

	int len;
    cin>>len;
    int pre[len], mid[len];

	for(int i=0; i<len; i++){
		cin>>mid[i];
	}
	for(int i=0; i<len; i++){
		cin>>pre[i];
	}
	BiTree bt = Create(pre, mid, len);
	Seq(bt);
	Destroy(bt);

	return 0;

}
