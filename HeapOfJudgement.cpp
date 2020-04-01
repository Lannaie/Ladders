#include <iostream>
#include <string.h>
using namespace std;

int SmallCupPile(int *H, int len){

	if(len<=1){
		return -1;
	}

	int tmp = len;
	while(tmp>1){
		int j = (tmp-1)/2;
		if(H[j]>H[tmp]){
			int tmp1 = H[j];
			H[j] = H[tmp];
			H[tmp] = tmp1;
		}
		tmp = j;
	}
	return 1;

}

int String2Int(string s){

	int Int = 0;

	for(int i=0; s[i]!='\0'; i++){
		if(i==0){
			Int+=s[i]-'0';
		}else{
			Int=Int*10+s[i]-'0';
		}
	}
	return Int;

}

int Search(int x, int *H, int len){

	for(int i=1; i<len; i++){
		if(H[i]==x){
			return H[i/2];
		}
	}
	return -1;

}

void Judgement(int *H, int len){

	int x, y;
	string s;
	
	cin>>x>>s;
	if(s=="and"){
		cin>>y>>s>>s;
		if(Search(x, H, len)==Search(y, H, len)){
			cout<<"T\n";
		}else{
			cout<<"F\n";
		}
	}else{
		cin>>s>>s;
		if(s=="root"){
			if(H[1]==x){
				cout<<"T\n";
			}else{
				cout<<"F\n";
			}
		}else if(s=="parent"){
				cin>>s>>y;
			if(x==Search(y, H, len)){
				cout<<"T\n";
			}else{
				cout<<"F\n";
			}
		}else if(s=="child"){
			cin>>s>>y;
			if(Search(x, H, len)==y){
				cout<<"T\n";
			}else{
				cout<<"F\n";
			}
		}
	}

}

int main(){

	int N, M, i;
	cin>>N>>M;
	int *H = new int[N];

	i=1;
	H[0] = -1;
	while(i<=N){
		cin>>H[i];
		SmallCupPile(H, i);
		i++;
	}
	while(M--){
		Judgement(H, N+1);
	}
	delete[] H;

	return 0;

}
