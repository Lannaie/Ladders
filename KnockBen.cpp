#include <iostream>
using namespace std;
int main(){

	int n, i, flag;
	cin>>n;
	char j;
	char verse[n][100];

	i=0;
	flag=0;
	while(i<n){
		verse[i][0]=' ';
		i++;
	}
	i=-1;
	j='1';
	while(i<n){
		verse[i][j-48]=getchar();
		if(verse[i][j-48]=='\n'){
			if(flag==1)
				verse[i][0]='0';
			else
				verse[i][0]=j;
			j='1';
			i++;
			flag=0;
		}else if(verse[i][j-48]==',' || verse[i][j-48]=='.'){
			if(verse[i][j-3-48]!='o' || verse[i][j-2-48]!='n' || verse[i][j-1-48]!='g'){
				flag=1;
			}
		}
		j++;
	}
	for(int a=0; a<n; a++){
		if(verse[a][0]=='0'){
			cout<<"Skipped"<<endl;
		}else{
			j=verse[a][0];
			i=3;
			while(i){
				if(verse[a][j-48]==' '){
					i--;
				}
				j--;
			}
			for(int b=1; b<=j-48; b++){
				cout<<verse[a][b];
			}
			cout<<" qiao ben zhong.\n";
		}
	}

	return 0;

}
