#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

	int n;
	int i=0, j=0;
	char ch;
	char *str = new char();

	cin>>n>>ch;
	cin>>str[i];
	while(str[i]!='\n'){
		i++;
		str[i] = getchar();
	}
	if(i>n){
		for(j=i-n; j<i; j++){
			cout<<str[j];
		}
		cout<<"\n";
	}else{
		n -=i;
		while(n--){
			cout<<ch;
		}
		while(j<i){
			cout<<str[j];
			j++;
		}
		cout<<"\n";
	}

	delete str;
	return 0;

}
