#include <iostream>
#define INIT_SIZE 5
using namespace std;

int main(){

	char *ch1 = new char[INIT_SIZE];
	char *ch2 = new char[INIT_SIZE];
	int c1=0, c2=0;
	
	cout<<"输入第一个字符串(不含占位符$)：";
	ch1[c1]= getchar();
	while(ch1[c1]!='\n'){
		if(c1+1>INIT_SIZE){
			char *chget = ch1;
			int i=0;
			ch1 = new char[c1+5];
			while(i<=c1){
				ch1[i] = chget[i];
				i++;
			}
		}
		c1++;
		ch1[c1] = getchar();
	}cout<<c1<<endl;
	cout<<"输入第二个字符串(不含占位符$)：";
	ch2[c2] = getchar();
	while(ch2[c2]!='\n'){
		if(c2+1>INIT_SIZE){
			char *chget = ch2;
			int i=0;
			ch2 = new char[c2+5];
			while(i<=c2){
				ch2[i] = chget[i];
				i++;
			}
		}
		c2++;
		ch2[c2] = getchar();
	}
	for(int i=0; i<c1; i++){
		for(int j=0; j<c2; j++){
			if(ch1[i]==ch2[j]){
				ch1[i] = '$';
			}
		}
	}
	c2=0;
	while(c2<=c1){
		if(ch1[c2]!='$'){
			cout<<ch1[c2];
		}
		c2++;
	}

	delete[] ch1;
	delete[] ch2;
	return 0;

}
