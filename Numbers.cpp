#include <iostream>
using namespace std;
int main(){

	int a[10]={0};
	char get;

	cout<<"输入一个不超过1000位的正整数N：";
	get=getchar();
	while(get!='\n'){
		int n=get-48;
		a[n]++;
		get=getchar();
	}
	for(int i=0; i<10; i++){
		if(a[i]!=0){
			cout<<i<<": "<<a[i]<<endl;
		}
	}

	return 0;

}
