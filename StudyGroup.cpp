#include <iostream>
#include <string>
using namespace std;
typedef struct{
	int sex;
	string name;
}Stu;
int main(){

	int n;
	int i=0;

	cout<<"总人数：";
	cin>>n;
	Stu *student = new Stu[n];
	while(i<n){
		cin>>student[i].sex>>student[i].name;
		i++;
	}
	for(i=0; i<n; i++){
		for(int j=n-1; j>i; j--){
			if(student[i].sex+student[j].sex==1){
				cout<<student[i].name<<" "<<student[j].name<<endl;
				student[i].sex = 2;
				student[j].sex = 2;
				break;
			}
		}
	}

	delete[] student;
	return 0;

}
