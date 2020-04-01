#include <iostream>
using namespace std;

int Init(int *pre, int N){

	for(int i=0; i<N; i++){
		pre[i] = i;
	}
	return 1;

}

int Alone(int pre[], int n, int e){

	if(!pre) return -1;

	int flag[n] = {0};

	for(int i=0; i<n; i++){
		if(pre[i]!=i && pre[i]>=0){
			flag[i] = 1;
			flag[pre[i]] = 1;
		}
	}
	if(pre[e]==0){
			return 1;
	}
	return 0;

}

int Check(int *pre, int n, int &head){

	int counts = 0;
	int p = -1;

	for(int i=0; i<n; i++){
		if(pre[i]<0){
			if(pre[i]==-1) p = i;
			counts++;
		}else if(pre[i]==p){
			pre[i] = i;
			counts++;
		}else if(pre[i]==i){
			counts++;
		}
	}
	if(p>-1){
		pre[p] = -2;
	}
	if(head>counts+1){
		head = counts;
		return 0;
	}
	head = counts;
	return 1;

}

int main(){

	int N, M, head;
	cin>>N>>M;
	int pre[N];

	Init(pre, N);
	for(int i=0; i<M; i++){
		int p1, p2;
		cin>>p1>>p2;
		pre[p2] = p1;
	}
	head = 0;
	Check(pre, N, head);
	cin>>M;
	for(int i=0; i<M; i++){
		int p;
		cin>>p;
		pre[p] = -1;
		int res = Check(pre, N, head);
		if(res==1){
			cout<<"City "<<p<<" is lost.\n";
		}else if(res==0){
			cout<<"Red alert: City "<<p<<" is lost.\n";
		}
		if(head==M-1){
			cout<<"Game over!";
			break;
		}
	}
	return 0;

}
