#include <iostream>
#include <string>
using namespace std;
int main(){

	int n, i, j, k;
	char *input, *data, c;

	cin>>n;
	i=0;
	j=0;
	data = new char();
	input = new char();
	c = getchar();
	while(1){
		c = getchar();
		if(c=='\n'){
			if(input[0]=='E' || input[0]=='e'){
				break;
			}
			data[j] = input[0];
			i=0;
			j++;
			input = new char();
		}else{
			input[i] = c;
			i++;
		}
	}
	i=0;
	k=0;
	n++;
	while(i<j){
		k++;
		switch(data[i]){
			case 'J': if(k%n==0){
					  	cout<<"JianDao\n";
					  }else{
					  	cout<<"ChuiZi.\n";
					  }
					  break;
			case 'B': if(k%n==0){
					  	cout<<"Bu\n";
					  }else{
					  	cout<<"JianDao\n";
					  }
					  break;
			case 'C': if(k%n==0){
					  	cout<<"ChuiZi\n";
					  }else{
					  	cout<<"Bu\n";
					  }
					  break;
		}
		i++;
	}

	delete data;
	delete input;
	return 0;

}
