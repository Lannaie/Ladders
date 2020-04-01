#include <iostream>
using namespace std;
int main(){

	int i=0, j=0;
	char *name = new char();
	cin>>name;
	cout<<"Hello "<<name;
	delete name;
	return 0;

}
