#include <iostream>
#include <cmath>
using namespace std;
int main(){

	int N;
	char hg;

	cout<<"输入一个正整数和一个符号(中间用空格隔开)：\n";
	cin>>N>>hg;
	if(N<7) cout<<"不能形成沙漏。";
	else{
		int n=N/2;
		int flag=1;
		while(n>=flag){
			flag+=2;
			n-=flag;
		}
		int k=flag;
		int l = -1;
		for(int i=0; i<flag; i++){
			if(i<=flag/2){
				k=flag-i;
				l++;
			}else{
				k+=1;
				l--;
			}
			for(int j=0; j<k; j++){
				if(j<l)cout<<" ";
				else{
					cout<<hg;
					N--;
				}
			}
			cout<<"\n";
		}
		cout<<N;
	}

	return 0;

}
