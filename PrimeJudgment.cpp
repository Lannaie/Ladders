#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	int i=0, j=0;
	int *num = new int[n];

	while(i<n){
		cin>>num[i];
		i++;
	}
	j=n;
	//是素数1，不是素数0
	while(n--){
		i = num[n]/2;
		while(i>1){
			if(num[n]%i==0){
				num[n] = 0;
				break;
			}
			i--;
		}
		if(num[n]!=0){
			num[n] = 1;
		}
	}
	i=0;
	while(i<j){
		if(num[i]==1){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}
		i++;
	}

	delete[] num;
	return 0;

}
