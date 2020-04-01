#include <iostream>
#include <iomanip>
using namespace std;
typedef struct{
	char sex;
	double hei;
}Human;
int main(){

	int n;
	int i=0;
	cin>>n;
	Human *infor = new Human[n];

	while(i<n){
		cin>>infor[i].sex>>infor[i].hei;
		i++;
	}
	i=0;
	cout<<setiosflags(ios::fixed)<<setprecision(2);
	while(i<n){
		if(infor[i].sex=='F'){
			cout<<infor[i].hei*1.09;
		}else{
			cout<<infor[i].hei/1.09;
		}
		i++;
		cout<<"\n";
	}

	delete[] infor;
	return 0;

}
