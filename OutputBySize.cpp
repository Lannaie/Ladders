#include <iostream>
using namespace std;
int main(){

	int i=3, a=0, b=0, c=0;
	int n;

	cout<<"输入三个整数(以空格分开):";
	while(i--){
		cin>>n;
		if(n>a){
			c=b;
			b=a;
			a=n;
		}else if(n>b){
			c=b;
			b=n;
		}else if(n>c){
			c=n;
		}
	}
	cout<<c<<"->"<<b<<"->"<<a<<endl;

	return 0;

}
