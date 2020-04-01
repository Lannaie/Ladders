#include <iostream>
using namespace std;

typedef char String[1000];

int Symmetric(String s, int n){

	int flag=0, len=0, i, j;

	for(i=0; i<n; i++){
		if(!flag){
			for(j=n-1; j>i; j--){
				if(s[i]==s[j]){
					flag=1;
					len+=2;
					j--;
					break;
				}
			}
		}else{
			if(i==j || j-i==1){
				len+=1+j-i;
				break;		
			}else if(s[i]==s[j]){
				j--;
				len+=2;
			}else{
				len=0;
				flag=0;
			}
		}
	}
	return len;

}

int main(){

	String s;
	int i;

	i=0;
	cin>>s[i];
	while(s[i]!='\n'){
		if(i>=1000){
			cout<<"超过1000个字符，之后不在录入";
			break;
		}
		i++;
		s[i] = getchar();
	}
	cout<<Symmetric(s, i);

	return 0;

}
