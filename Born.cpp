#include <iostream>
using namespace std;
int main(){

	int *year = new int[4];
	int n, num, n1, sum;
	int i=0;

	cin>>num>>n;
	while(1){
		sum=0;
		int target = num+i;
		year[0] = target/1000;
		target%=1000;
		year[1] = target/100;
		target%=100;
		year[2] = target/10;
		year[3] = target%10;
		for(int k=0; k<4; k++){
			n1=1;
			if(year[k]<0 || year[k]==-10)
					continue;
			for(int j=3; j>k; j--){
				if(year[k]==year[j]){
					if(year[j]==0){
						year[j] = -10;
					}else{
					year[j] *= -1;
					}
				}
			}
			sum+=n1;
		}
		if(sum==n){
			break;
		}
		i++;
	}
	cout<<i<<" ";
	i=0;
	while(i<4){
		if(year[i]==-10){
			year[i] =0;
		}else if(year[i]<0){
			year[i] *= -1;
		}
		cout<<year[i];
		i++;
	}
			
	return 0;

}
