#include <iostream>
using namespace std;

typedef struct Node{
	int S, F, M;
	char sex;
}*Men;

int Init(Men &man, int n){
	
	if(!man || n<0) return -1;

	for(int i=0; i<n; i++){
		man[i].S = man[i].F = man[i].M = 0;
		man[i].sex = ' ';
	}
	return 1;

}

int Judge(Men man, int S1, int S2, int n){

	if(!S1 || !S2) return -1;

	int flag=0;
	Node a, b;
/*
	for(int i=0; i<n; i++){
		if(man[i].S==S1){
			a = man[i];
			flag++;
		}
		if(man[i].S==S2){
			b = man[i];
			flag++;
		}
		if(flag==2){
			break;
		}
	}*/
	a = man[S1-1];
	b = man[S2-1];
	if(a.sex==b.sex){
		cout<<"Never Mind\n";
	}else{
		if(a.F-b.F<5 && a.F-b.F>-5){
			if(a.F!=-1 && b.F!=-1){
				cout<<"No\n";
				return 1;
			}
		}
		if(a.M-b.F<5 && a.M-b.F>-5){
			if(a.M!=-1 && b.F!=-1){
				cout<<"No\n";
				return 1;
			}
		}
		if(a.F-b.M<5 && a.F-b.M>-5){
			if(a.F!=-1 && b.M!=-1){
				cout<<"No\n";
				return 1;
			}
		}
		if(a.M-b.M<5 && a.M-b.M>-5){
			if(a.M!=-1 && b.M!=-1){
				cout<<"No\n";
				return 1;
			}
		}
		cout<<"Yes\n";
	}
	return 1;

}

int main(){

	int n, k;
	cin>>n;
	Men man = new Node[n];
	
	for(int i=0; i<n; i++){
		cin>>man[i].S>>man[i].sex>>man[i].F>>man[i].M;
	}
	cin>>k;
	for(int i=0; i<k; i++){
		int a, b;
		cin>>a>>b;
		Judge(man, a, b, n);
	}
	delete[] man;
	return 0;

}
