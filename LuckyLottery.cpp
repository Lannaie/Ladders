#include <iostream>
using namespace std;
int main(){
	
	int n, i, j;
	cin>>n;
	int man[n];
	char *lotte = new char();

	i=0;
	j=-1;
	while(j<n){
		lotte[i]=getchar();
		if(lotte[i]=='\n'){
			if((lotte[3]+lotte[1]+lotte[2])==(lotte[i-1]+lotte[i-2]+lotte[i-3])){
				man[j]=1;
			}else{
				man[j]==0;
			}
			i=0;
			j++;
		}
		i++;
	}
	j=0;
	while(j<n){
		if(man[j]==1){
			cout<<"You are lucky!";
		}else{
			cout<<"Wish you good luck.";
		}
		j++;
		cout<<"\n";
	}

	delete lotte;
	return 0;

}
