#include <iostream>
#include <algorithm>
using namespace std;

int N;
int visit[510], edge[510][510];

void dfs(int e){	//将可以连通的图连通

	visit[e] = true;
	for(int i=0; i<N; i++){
		if(visit[i]==false && edge[e][i]==1){
			dfs(i);
		}
	}

}

int Count(){	//计数

	int counts = 0;

	fill(visit, visit+N, false);
	for(int i=0; i<N; i++){
		if(visit[i]==false){
			dfs(i);
			counts++;
		}
	}
	return counts;

}

int main(){

	int M, cit, tmpcit;

	cin>>N>>M;
	for(int i=0; i<M; i++){
		int p1, p2;
		cin>>p1>>p2;
		edge[p1][p2]=edge[p2][p1]=1;
	}
	cin>>M;
	cit = Count();
	for(int i=0; i<M; i++){
		int p;
		cin>>p;
		for(int j=0; j<N; j++){
			if(edge[p][j]==1){
				edge[p][j] = edge[j][p] = 0;
			}
		}
		tmpcit = Count();
		if(tmpcit>cit+1){
			cout<<"Red Alert:City "<<p<<" is lost.\n";
		}else{
			cout<<"City "<<p<<" is lost.\n";
		}
		cit = tmpcit;
		if(i==N-1){
			cout<<"Game over.";
		}
	}

	return 0;

}
