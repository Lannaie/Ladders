#include <iostream>
using namespace std;
int main(){

	int i, j;
	int aa, ba, aj, bj;

	cin>>aa>>ba;
	i=0;
	aj=0;
	bj=0;
	while(i<3){
		cin>>j;
		if(j==0){
			aj++;
		}else{
			bj++;
		}
		i++;
	}
	if(aa>ba){
		if(aj>0){
			cout<<"The winner is a: "<<aa<<" + "<<aj;
			return 0;
		}
	}
	cout<<"The winner is b: "<<ba<<" + "<<bj;

	return 0;

}
