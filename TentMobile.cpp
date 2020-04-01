#include <iostream>
using namespace std;
int main(){

	int a;
	int i=0, j=0, k=0;
	int *num = new int[10]{0};
	int *arr = new int();
	char *tel = new char[11];

	cout<<"输入电话号码：";
	while(i<11){
		cin>>tel[i];
		num[tel[i]-48] = 1;
		i++;
	}
	i=10;
	cout<<"int[] arr = new int[]{";
	while(i--){
		if(num[i]==1){
			arr[j] = i;
			j++;
			cout<<i<<", ";
		}
	}
	a = j;
	cout<<"\b};\nint[] index = new int[]{";
	for(i=0; i<11; i++){
		for(j=0; j<a; j++){
			if(tel[i]-48 == arr[j]){
				cout<<j<<", ";
			}
		}
	}
	cout<<"\b};";

	delete[] arr;
	delete[] tel;
	delete[] num;
	return 0;

}
