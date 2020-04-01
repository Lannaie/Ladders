#include <iostream>
#include <string>
using namespace std;
int main(){

	int i=0, j=0;
	char c=' ';
	char *name1 = new char();
	char *name2 = new char();
	
	while(c!='.'){
		if(c=='\n'){
			i++;
			j=0;
		}
		if(i==1){
			name1[j] = c;
			j++;
		}
		if(i==13){
			name2[j] = c;
			j++;
		}
		c = getchar();
	}
	if(i<14){
		if(i<2){
			cout<<"Momo...No one is for you...";
		}else{
			cout<<name1<<" is the only one for you...";
		}
	}else{
		cout<<name1<<" and "<<name2<<" is inviting for you...";
	}

	delete name1;
	delete name2;
	return 0;

}
