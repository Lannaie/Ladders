#include <iostream>
using namespace std;
int main(){

	char *fu, symb;
	int flag, k, n, N;

	k=0;
	n=0;
	cin>>symb>>N;
	getchar();
	while(n<N){
		fu[k]=getchar();
		if(fu[k]=='\n'){
			n++;
		}
		k++;
	}
	flag=0;
	k--;
	for(int i=0, j=k-1; i<k/2, j>k/2; i++, j--){
		if(fu[i]==fu[j]){
			flag++;
		}
	}
	if(flag==k/2){
		flag=1;
	}else{
		flag=0;
	}
	if(flag==1){
		cout<<"Bu yong dao le\n";
	}
	for(int i=k-1; i>-1; i--){
		if(fu[i]!=' ' && fu[i]!='\n'){
			cout<<symb;
		}else{
			cout<<fu[i];
		}
	}

	return 0;

}
