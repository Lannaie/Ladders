#include <iostream>
using namespace std;

int Order(int i, int N, int L, int arr[][4], int newa[][3]){

	int flag=0;

	for(int j=0; j<N; j++){
		if(arr[i][2]==arr[j][0]){
			arr[i][3]=j;
			if(arr[j][2]!=-1){
				Order(j, N, L, arr, newa);
			}else{
				flag=1;
			}
			break;
		}
	}
	if(flag==1){
		int na=0;
		for(int k=0; k<N; k++){
			if(arr[L][2]!=-1){
				int l = arr[L][3];
				int l1 = L;
				for(int j=0; j<N; j++){
					if(arr[L][1]==arr[l][1] || arr[L][1]==arr[l][1]*(-1)){
						arr[l1][3] = arr[l][3];
						arr[l1][2] = arr[l][2];
						newa[na][0] = arr[l][0];
						if(na>0){
							newa[na-1][2] = newa[na][0];
						}
						newa[na][1] = arr[l][1];
						newa[na][2] = arr[l][2];
						na++;
					}
					if(arr[l][2]!=-1){
					l1 = l;
					l = arr[l][3];
					}else{
					break;
					}
				}
			}
			cout<<arr[L][0]<<" "<<arr[L][1]<<" "<<arr[L][2]<<endl;
			if(arr[L][2]!=-1){
				L = arr[L][3];
			}else{
				break;
			}
		}
		i=0;
		while(i<na){
			cout<<newa[i][0]<<" "<<newa[i][1]<<" "<<newa[i][2]<<endl;
			i++;
		}
	}

	return 0;

}

int main(){

	int L, N, i, na;
	cin>>L>>N;
	int arr[N][4], newa[N][3];

	i=0;
	while(i<N){
		cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
		arr[i][3]=-1;
		if(arr[i][0]==L){
			L=i;
		}
		i++;
	}
	Order(L, N, L, arr, newa);
//	i=0;while(i<N){cout<<arr[i][0]<<" "<<arr[i][2]<<endl;i++;}
/*	na=0;
	for(int k=0; k<N; k++){
		int l = arr[L][3];
		for(int j=0; j<N; j++){
			if(arr[L][1]==arr[l][1]){
				arr[L][3] = arr[l][3];
				newa[na][0] = arr[l][0];
				newa[na][1] = arr[l][1];
				newa[na][2] = arr[l][2];
				na++;
				break;
			}else{
				if(arr[l][2]!=-1){
					l = arr[l][3];
				}
			}
		}
		cout<<arr[L][0]<<" "<<arr[L][1]<<" "<<arr[L][2]<<endl;
		if(arr[L][2]!=-1){
			L = arr[L][3];
		}else{
			break;
		}
	}
*/
	return 0;

}
