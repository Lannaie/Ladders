#include <iostream>
using namespace std;

typedef struct{
	int num;
	int *ok, *no;
}Men;

int main(){

	int N, R, S;
	cin>>N>>R>>S;
	int sear[S][2], n1[N], n2[N];
	Men *man;

	man = new Men[N];
	for(int i=0; i<N; i++){
		man[i].num=0;
		man[i].ok=new int();
		man[i].no=new int();
		n1[i]=0;
		n2[i]=0;
	}
	for(int i=0; i<R; i++){
		int p1, p2, r;
		cin>>p1>>p2>>r;
		p1--;
		p2--;
		if(r>0){
			man[p1].ok[n1[p1]] = p2+1;
			man[p2].ok[n1[p2]] = p1+1;
			n1[p1]++;
			n1[p2]++;
		}else{
			man[p1].no[n2[p1]] = p2+1;
			man[p2].no[n2[p2]] = p1+1;
			n2[p1]++;
			n2[p2]++;
		}
		man[p1].num++;
		man[p2].num++;
	}
	for(int i=0; i<S; i++){
		cin>>sear[i][0]>>sear[i][1];
	}
	for(int i=0; i<S; i++){
		int n = sear[i][0], m=sear[i][1], k=0;
		int flag=0;
		for(int j=0; j<man[n-1].num; j++){
			if(man[n-1].ok[j]!=0){
				k++;
				if(man[n-1].ok[j]==m){
					cout<<"No problem\n";
					flag=1;
				}
			}else{
				if(man[n-1].no[j-k]==m){
					flag=1;
					for(int a=0; man[n-1].ok[a]!=0; a++){
						for(int b=0; man[m-1].ok[b]!=0; b++){
							if(man[n-1].ok[a]==man[m-1].ok[b]){
								cout<<"OK, but...\n";
								flag=2;
								break;
							}
						}
						if(flag==2){
							break;
						}
					}
					if(flag!=2){
						cout<<"No way\n";
					}
				}
			}
		}
		if(!flag){
			cout<<"OK\n";
		}
	}
	for(int i=0; i<N; i++){
		delete man[i].ok;
		delete man[i].no;
		man[i].num = 0;
	}
	delete[] man;
	man=NULL;

	return 0;

}
