#include <iostream>
using namespace std;
typedef struct{
	int actwei;
	int hei;
}Human;
int main(){

	int i=0;
	double stawei, diff;
	int n;
	cin>>n;
	Human *infor = new Human[n];

	while(i<n){
		cin>>infor[i].hei>>infor[i].actwei;
		i++;
	}
	i=0;
	while(i<n){
		stawei = (infor[i].hei-100)*0.9*2;
		diff = infor[i].actwei-stawei;
		stawei = stawei*0.1;
		if(diff>stawei*(-1) && diff<stawei){
			cout<<"You are wan mei.\n";
		}else if(diff<=stawei*(-1)){
			cout<<"You are tai shou le.\n";
		}else if(diff>=stawei){
			cout<<"You are tai pang le.\n";
		}
		i++;
	}

	delete[] infor;		
	return 0;

}
