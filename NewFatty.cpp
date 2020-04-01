#include <iostream>
#include <iomanip>
using namespace std;
int main(){

	double wei, hei;

	cout<<setiosflags(ios::fixed)<<setprecision(1);
	cin>>wei>>hei;
	hei*=hei;
	wei/=hei;
	cout<<wei<<endl;
	if(wei>25){
		cout<<"PANG";
	}else{
		cout<<"Hai Xing";
	}

	return 0;

}
