#include <iostream>
using namespace std;
int main(){

	char ch;

	cout<<"输入一个整数(包括正数，零和负数): ";
	ch=getchar();
	while(ch!='\n'){
		switch(ch){
			case '-': cout<<"fu ";
					  break;
			case '0': cout<<"ling ";
					  break;
			case '1': cout<<"yi ";
					  break;
			case '2': cout<<"er ";
					  break;
			case '3': cout<<"san ";
					  break;
			case '4': cout<<"si ";
					  break;
			case '5': cout<<"wu ";
					  break;
			case '6': cout<<"liu ";
					  break;
			case '7': cout<<"qi ";
					  break;
			case '8': cout<<"ba ";
					  break;
			case '9': cout<<"jiu ";
					  break;
		}
		ch = getchar();
	}

	return 0;

}
