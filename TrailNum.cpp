#include <iostream>
using namespace std;

int tailNum(int n){

	if(n<0) return -1;

	int num, j, flag, k;
	int *t;

	t = new int[n];
	j=0;
	for(int i=0; i<n; i++){
		cin>>num;
		for(k=0; k<j; k++){
			if(num<t[k]){
				t[k] = num;
				break;
			}
		}
		if(k>=j){
			t[j++] = num;
		}
	}
	delete[] t;
	return j;

}

int main(){

	int n;

	cin>>n;
	cout<<tailNum(n);

	return 0;

}
