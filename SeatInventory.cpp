#include <iostream>
using namespace std;
int main(){

	int N, i, j, flag;
	cin>>N;
	int num[N];
	int *order;

	i=0;
	while(i<N){
		cin>>num[i];
		i++;
	}
	j=0;
	flag=0;
	order = new int();
	for(int m=0; m<N; m++){
		int max=num[m];
		for(int n=N-1; n>-1; n--){
			if(j>0 && num[n]>=order[j-1]){
				continue;
			}
			if(max<num[n]){
				max=num[n];
				flag=1;
			}
		}
		if(j>0 && max>=order[j-1]){
			continue;
		}
		order[j] = max;
		j++;
		if(flag==1){
			m--;
		}
		flag=0;
	}
	for(int m=0; m<N; m++){
		cout<<"#"<<m+1;
		int k=-N+1+m;
		for(int n=0; n<num[m]*10; n++){
			if(n%10==0){
				cout<<"\n";
			}
			i=j-1;
			for(; i>-1; i--){
				if(n<=order[i]*10){
					if(i==0){
						k+=2;
					}else{
						k=k+i+1;
					}
					cout<<k<<" ";
					break;
				}
			}
		}
		cout<<"\n";
	}
	delete order;
	return 0;

}
