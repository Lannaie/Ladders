#include <iostream>
using namespace std;
int main(){

	int j, num;
   	long i, bache;

	cin>>num;
	i=1;
	j=1;
	bache=1;
	while(j){
		i*=10;
		bache+=i;
		j++;
		if(bache<num){
			continue;
		}
		if(bache%num==0){
			break;
		}
	}
	cout<<bache/num<<" "<<j<<endl;

	return 0;

}
