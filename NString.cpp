#include <iostream>
#include <cmath>
using namespace std;
int main(){

	int i, L, num;
	int *n;

	cin>>L>>num;
	num--;
	if(num>pow(26, L) || num<0){
		cout<<"超出范围。";
		return 0;
	}
	n = new int[L];
	i=0;
	while(i<L){
		n[i]=num%26;
		num/=26;
		i++;
	}
	i=0;
	while(i<L){
		char ch='z';
		if(n[i]!=0){
			ch-=n[i];
		}
			cout<<ch;
			i++;
	}

	delete[] n;
	return 0;

}
