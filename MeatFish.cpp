#include <iostream>
using namespace std;
int main(){

	int n, i;
	cin>>n;
	int man[n][3];

	i=0;
	while(i<n){
		cin>>man[i][0]>>man[i][1]>>man[i][2];
		i++;
	}
	i=0;
	while(i<n){
		if(man[i][0]==1){
			if(man[i][1]>130){
				man[i][1]=1;
			}else if(man[i][1]<130){
				man[i][1]=-1;
			}else{
				man[i][1]=0;
			}
			if(man[i][2]>27){
				man[i][2]=1;
			}else if(man[i][2]<27){
				man[i][2]=-1;
			}else{
				man[i][2]=0;
			}
		}else{
			if(man[i][1]>129){
				man[i][1]=1;
			}else if(man[i][1]<129){
				man[i][1]=-1;
			}else{
				man[i][1]=0;
			}
			if(man[i][2]>25){
				man[i][2]=1;
			}else if(man[i][2]<25){
				man[i][2]=-1;
			}else{
				man[i][2]=0;
			}
		}
		if(man[i][1]==1){
			cout<<"ni li hai! ";
		}else if(man[i][1]==-1){
			cout<<"duo chi yu! ";
		}else{
			cout<<"wan mei! ";
		}
		if(man[i][2]==1){
			cout<<"shao chi rou!\n";
		}else if(man[i][2]==-1){
			cout<<"duo chi rou!\n";
		}else{
			cout<<"wan mei!\n";
		}
		i++;
	}

	return 0;

}
