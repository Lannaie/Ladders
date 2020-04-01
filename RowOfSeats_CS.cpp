#include <iostream>
using namespace std;
//使用并查集
int find(int pre[], int i){//查找根

	if(pre[i]==i)
		return i;
	else
		return find(pre, pre[i]);

}

int main(){

	int N, R, S, p1, p2, r;
	cin>>N>>R>>S;
	int pre[N+1], isFri[N+1][N+1];

	for(int i=0; i<N+1; i++){
		pre[i] = i;
	}
	for(int i=0; i<(N+1); i++){
		for(int j=0; j<N+1; j++){
			isFri[i][j] = 0;
		}
	}
	for(int i=0; i<R; i++){
		cin>>p1>>p2>>r;
		if(r>0){
			if(find(pre, p1)!=find(pre, p2)){//根不同时合并
				pre[p2] = find(pre, p1);
			}
		}
		isFri[p1][p2] = isFri[p2][p1] = r;
	}
	for(int i=0; i<S; i++){
		cin>>p1>>p2;
		if(pre[p1]==pre[p2]){
			if(isFri[p1][p2]!=-1){
				cout<<"No problem\n";
			}else{
				cout<<"Ok, but...\n";
			}
		}else if(isFri[p1][p2]==0){
			cout<<"Ok\n";
		}else{
			cout<<"No way\n";
		}
	}

	return 0;

}
