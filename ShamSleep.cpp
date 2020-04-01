#include <iostream>
#include <string>
using namespace std;
int main(){

	int n, i, j, rate, pulse;
	cin>>n;
	string name[n];
	string c;

	i=0;
	j=0;
	while(i<n){
		cin>>c>>rate>>pulse;
		if(rate>=15 && rate<=20 && pulse>=50 && pulse<=70){
			name[j]=c;
			j++;
		}
		i++;
	}
	i=0;
	while(i<j){
		cout<<name[i]<<endl;
		i++;
	}
	return 0;

}
