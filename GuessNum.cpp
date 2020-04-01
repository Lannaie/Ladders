#include <iostream>
#include <string>
using namespace std;
int main(){

	int n, i, min, max, ti1, ti2;
	cin>>n;
	string name[n];
	int num[n], sum;

	i=0;
	sum=0;
	while(i<n){
		cin>>name[i]>>num[n];
		sum+=num[n];
		i++;
	}
	min=sum;
	sum=sum/n/2;
	max=0;
	i=0;
	while(i<n){
		if(num[i]>sum){
			if(num[i]<=min){
				min=num[i];
				ti1=i;
			}
		}else{
			if(num[i]>=max){
				max=num[i];
				ti2=i;
			}
		}
		i++;
	}
	cout<<sum<<" ";
	if((sum-max)>(min-sum)){
		cout<<name[ti2];
	}else{
		cout<<name[ti1];
	}
	return 0;

}
