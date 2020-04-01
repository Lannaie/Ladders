#include <iostream>
using namespace std;

void PreTraverse(int *back, int *in, int N){

	if(!back || !in || N<=0){
		return;
	}

	int a[N], b[N], c[N], d[N];
	int i, j;

	cout<<back[N-1]<<" ";
	i=0;
	while(in[i]!=back[N-1] && i<N){
		a[i] = back[i];
		b[i] = in[i];
		i++;
	}
	PreTraverse(a, b, i);
	j=i;
	while(i<N){
		c[i-j] = back[i];
		d[i-j] = in[i+1];
		i++;
	}
	PreTraverse(c, d, i-j-1);
	
}
/*
typedef struct{
	int *data;
	int head, tail;
}Sequence;

int Init(Sequence &S, int N){

	S.data = new int[N];
	S.head = 0;
	S.tail = -1;
	return 1;

}
int Destroy(Sequence &S){

	delete[] S.data;
	S.data = NULL;
	S.head = S.tail = 0;
	return 1;

}
int Insert(Sequence &S, int e){

	if(!S.data){
		return -1;
	}

	S.tail++;
	S.data[S.tail] = e;
	return 1;

}
int Delete(Sequence &S, int &e){

	if(!S.data){
		return -1;
	}
	e = S.data[S.head];
	S.head++;
	return 1;

}

void SeqTraverse(int *back, int *in, int N){

	int n=0;
	Sequence S;

	Init(S, N);
	Insert(S, back[N-1]);
	while(n<N){
		int e, i;

		Delete(S, e);
		i=0;
		while(in[i++] != e);
		i--;
		if(in[i]==back[i]){
			Insert(S, in[i-1]);
			Insert(S, back[i-1]);
			n+=2;
		}else if(i>0 && in[i] == back[i-1]){
			Insert(S, in[i-1]);
			n++;
		}else{
			if(i>0){
				Insert(S, back[i-1]);
				n++;
			}
			while(back[i++]!=e);
			if(i>1){
				Insert(S, back[i-2]);
				n++;
			}
		}
	}
	n=0;
	while(n<N){
		cout<<S.data[n]<<" ";
		n++;
	}

	Destroy(S);

}
*/

typedef struct Node{
	int backhead, backtail;
	int inhead, intail;
}Node;
typedef struct{
	int data;
	Node *range;
}Sequence;

void SeqTraverse(int *back, int *in, int N){

	if(!back || !in || N<0){
		return;
	}

	Sequence S[N];
	int i, j;

	S[0].data = back[N-1];
	S[0].range = new Node();
	S[0].range->backhead = 0;
	S[0].range->backtail = N-1;
	S[0].range->inhead = 0;
	S[0].range->intail = N-1;
	i=1;
	j=0;
	while(i<N && i>=j){
		int e = S[j].data, k = S[j].range->inhead;

		if(k<N){
			while(in[k++]!=e);
		}
		k=k-S[j].range->inhead+S[j].range->backhead-2;
		if(k>=S[j].range->backhead){
			S[i].data = back[k];
			S[i].range = new Node();
			S[i].range->backhead = S[j].range->backhead;
		   	S[i].range->backtail = k;	
			S[i].range->inhead = S[j].range->inhead;
			S[i].range->intail = k-S[j].range->backhead+S[j].range->inhead;
			i++;
		}
		k++;
		if(k<S[j].range->backtail){
			S[i].data = back[S[j].range->backtail-1];
			S[i].range = new Node();
			S[i].range->backhead = k;
			S[i].range->backtail = S[j].range->backtail-1;
			S[i].range->inhead = k-S[j].range->backhead+S[j].range->inhead+1;
			S[i].range->intail = S[j].range->intail;
			i++;
		}
		j++;
	}
	i=0;
	while(i<N){
		cout<<S[i].data<<" ";
		i++;
	}
	i=0;
	while(i<N){
		delete S[i].range;
		S[i].range = NULL;
		S[i].data = 0;
		i++;
	}

}

int main(){

	int N, i;
	cin>>N;
	int back[N], in[N];

	i=0;
	while(i<N){
		cin>>back[i];
		i++;
	}
	i=0;
	while(i<N){
		cin>>in[i];
		i++;
	}
	SeqTraverse(back, in, N);

	return 0;

}
