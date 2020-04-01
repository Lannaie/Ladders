#include <iostream>
using namespace std;
int main(){

	int a, b;
	int sum=0, i=0;

	cout<<"输入两个整数(中间用空格分开)：";
	cin>>a>>b;
	while(a<=b){
		i++;
		cout<<a<<"	";
		if(i>4){
			i=0;
			cout<<"\n";
		}
		a++;
	}
	cout<<"\nsum:"<<sum<<endl;

	return 0;
	
}
