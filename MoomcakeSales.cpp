#include <iostream>
#include <iomanip>
using namespace std;
int main(){

	int n, max, i, whol;
	cin>>n>>max;
	int stock[n];
    double	pri[n], sale;

	cout<<setiosflags(ios::fixed)<<setprecision(2);
	i=0;
	while(i<n){
		cin>>stock[i];
		i++;
	}
	i=0;
	while(i<n){
		cin>>pri[i];
		i++;
	}
	i/=2;
	if(i%2==0){
		int rel = stock[i-1]-stock[i];
		if(rel>0 && 2*stock[i-1]-stock[i]<=max || rel<0 && 2*stock[i]-stock[i-1]>=max){
			whol = i-1;
		}else if(rel<0 && 2*stock[i]-stock[i-1]<=max || rel>0 && 2*stock[i-1]-stock[i]>=max){
			whol = i;
			i = i-1;
		}
	}else{
		int rel = stock[i]-stock[i+1];
		if(rel>0 && 2*stock[i]-stock[i+1]<=max || rel<0 && 2*stock[i+1]-stock[i]>=max){
			whol = i;
			i = i+1;
		}else{
			whol = i+1;
		}
	}cout<<whol<<" "<<i<<endl;
	if(max-stock[whol]>0){
		sale = pri[i]/stock[i];
		cout<<pri[whol]+sale*(max-stock[whol]);
	}else{
		sale = pri[whol]/stock[whol];
		cout<<sale*max;
	}

	return 0;

}
