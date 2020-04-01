#include <iostream>
#include <iomanip>
using namespace std;
int main(){

	int pri, dis;
	double discount;

	cout<<setiosflags(ios::fixed)<<setprecision(2);
	cin>>pri>>dis;
	discount=dis*0.1;
	cout<<pri*discount;

	return 0;

}
