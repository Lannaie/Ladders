#include <iostream>
using namespace std;
int main(){

	int i1=0, j1=0, i2, j2;
	cin>>i1>>j1;
	int A[i1*j1];

	for(int i=0; i<i1*j1; i++){
		cin>>A[i];
	}

	cin>>i2>>j2;
	int B[i2*j2];
	for(int i=0; i<i2*j2; i++){
		cin>>B[i];
	}
	if(j1!=i2){
		cout<<"ERROR: "<<j1<<"!="<<i2;
	}else{
		int tot=0;
		for(int i=0; i<i1; i++){
			for(int j=0; j<j2; j++){
				for(j1=0; j1<i2; j1++){
					tot+=A[i*i2+j1]*B[j+i2*j1];
				}
				cout<<tot<<" ";
			}
			cout<<"\n";
		}
	}

	return 0;

}
