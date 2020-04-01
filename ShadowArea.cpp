#include <iostream>
using namespace std;
int main(){

	int x, y, s;

	cin>>x>>y;
	s=100*50-(100-x)*y-(x*y+(100-x)*(100-y))/2;
	cout<<s;
	return 0;

}
