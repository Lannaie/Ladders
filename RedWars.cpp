#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

int main(){

	int N,  num;
	cin>>N;
	int men[N+1][2], in;

	cout<<fixed<<setprecision(2);
	num=0;
	while(num<N+1){
		men[num][0] = 0;
		men[num][1] = 0;
		num++;
	}
	for(int i=1; i<N+1; i++){
		cin>>num;
		in=0;
		for(int j=0; j<num; j++){
			int man;
		   double pri;
			cin>>man;
			cin>>pri;
			men[man][0]+=pri;
			men[man][1]++;
			in+=pri;
		}
		men[i][0]-=in;
	}
	for(int i=0; i<N; i++){
		int pri = INT_MIN;
		int cur = 0;
		num=0;
		for(int j=N; j>0; j--){
			if(men[j][1]==-1){
				continue;
			}
			if(pri<men[j][0]){
				pri = men[j][0];
				cur = j;
				num = men[j][1];
			}else if(pri==men[j][0]){
				if(num<men[j][1]){
					cur = j;
					pri = men[j][0];
					num = men[j][1];
				}else if(num==men[j][1]){
					if(cur>j){
						cur = j;
						pri = men[j][0];
						num = men[j][1];
					}
				}
			}
		}
		cout<<cur<<" "<<(double)pri/100<<endl;
		men[cur][1] = -1;
	}

	return 0;

}
