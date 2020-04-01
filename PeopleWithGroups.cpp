#include <iostream>
using namespace std;

void FastRow(int *num, int l, int r){

	if(!num || l<0 || l>r) return;
	
	int le = l, ri = r, e = num[l];

	while(le!=ri){
		for(;le<ri && num[ri]<=e; ri--);
		num[le] = num[ri];
		for(;le<ri && num[le]>=e; le++);
		num[ri] = num[le];
	}
	num[le] = e;
	FastRow(num, l, le-1);
	FastRow(num, le+1, r);

}

void Calculate(int N, int num[]){

	if(N<0 || !num) return;

	int out, in, tot;

	out = in = N/2;
	if(N%2!=0){
		out++;
	}
	tot=0;
	for(int i=0; i<N; i++){
		if(i<out){
			tot+=num[i];
		}else{
			tot-=num[i];
		}
	}
	cout<<"Outgoing #: "<<out<<"\nIntroverted #: "<<in<<"\nDiff = "<<tot;

}

int main(){

	int N;
	cin>>N;
	int num[N];

	for(int i=0; i<N; i++){
		cin>>num[i];
	}
	FastRow(num, 0, N-1);
	Calculate(N, num);

	return 0;

}
