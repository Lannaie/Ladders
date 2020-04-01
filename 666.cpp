#include <iostream>
using namespace std;
int main(){

	int i, j;
	char *text = new char();

	i=0;
	j=0;
	cin>>text[i];
	while(text[i]!='\n'){
		if(text[i]=='6'){
			j++;
		}else if(text[i]==' '){
			if(j>9){
				i-=j;
				text[i++]='2';
				text[i++]='7';
				text[i]=' ';
			}else if(j>3){
				i-=j;
				text[i++]='9';
				text[i]=' ';
			}
			j=0;
		}
		i++;
		text[i]=getchar();
	}
	if(j>9){
		i-=j;
		text[i++]='2';
		text[i++]='7';
	}else if(j>3){
		i-=j;
		text[i++]='9';
	}
	j=0;
	while(j<i){
		cout<<text[j];
		j++;
	}

	delete text;
	return 0;

}
