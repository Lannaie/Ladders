#include <iostream>
using namespace std;
int main(){

	int i=0, j=0;
	int *num = new int();

	while(getchar()!='\n'){
		cin>>num[i];
		i++;
	}
	while(j<i){
		if(num[j]==250){
			cout<<j+1;
			break;
		}
		j++;
	}

	delete num;
	return 0;

}
