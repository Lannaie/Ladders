#include <iostream>
using namespace std;
typedef struct{
	int bnum;
	int sta;
	int time;
}Send;
typedef struct{
	int num;
	int min;
}Tot;
int main(){

	int n, i, j, num, min;
	char sta, *time;
	Send *book;
	Tot *tot;

	i=0;
	j=0;
	cin>>n;
	tot = new Tot[n];
	book = new Send();
	while(i<n){
		cin>>num>>sta>>time;
		min = ((time[0]-48)*10+(time[1]-48))*60+(time[3]-48)*10+(time[4]-48);
		if(num==0){
			int k=0, totnum=0, totmin=0;
			while(k<j){
				if(book[k].sta==0){
					totnum++;
					totmin+=book[k].time;
				}
				k++;
			}
			tot[i].num = totnum;
			if(totnum!=0){
				tot[i].min = totmin/totnum;
				j=0;
			}else{
				tot[i].min=0;
			}
			i++;
		}
		if(sta=='S'){
			book[j].bnum = num;
			book[j].sta = -1;
			book[j].time = min;
			j++;
		}else{
			int k=0;
			while(k<j){
				if(book[k].bnum==num){
					book[k].sta=0;
					book[k].time = min-book[k].time;
					break;
				}
				k++;
			}
		}
	}
	i=0;
	while(i<n){
		cout<<tot[i].num<<" "<<tot[i].min<<endl;
		i++;
	}

	delete[] tot;
	delete book;
	return 0;

}
