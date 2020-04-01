#include <iostream>
using namespace std;
int main(){

	int n, fir, N;
	int flag=2, num=0;
	int relnum=0, relfirst=1, reltotal=0;

	cout<<"输入一个正整数: ";
	cin>>N;
	n=N;
	reltotal=N;
	while(flag<N){
		if(n%flag==0){
			if(num==0){
				fir=flag;
			}
			num++;
			n /= flag;
			flag++;
		}else{
			if(num>2){
				if(relnum<num){
					relnum=num;
				}
				if(reltotal>N/flag){
					reltotal = N/(n%flag);
					relfirst = fir;
				}
			}
			flag = flag-num+1;
			num=0;
			n=N;
		}
	}
	if(relnum){
		cout<<relnum<<endl;
		while(reltotal/relfirst!=1){
			cout<<relfirst<<", ";
			reltotal/=relfirst;
			relfirst++;
		}
		cout<<relfirst<<endl;
	}else{
		cout<<"无。\n";
	}

	return 0;
	
}
