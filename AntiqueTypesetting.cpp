#include <iostream>
using namespace std;
int main(){

	int n, i1;
	char c;
	int i=0, num=0;
	char *str = new char();

	cin>>n;
	cin>>c;
	while(1){
		if(c=='\n'){
			while(i%n!=0){
				str[i] = ' ';
				i++;
			}
			break;
		}
		str[i] = c;
		i++;
		c = getchar();
	}
	for(int j=0; j<n; j++){
		for(int k=i-n+num; k>-1; k-=n){
			cout<<str[k]<<" ";
		}
		num++;
		cout<<endl;
	}

	delete str;	
	return 0;

}
