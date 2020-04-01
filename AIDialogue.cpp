#include <iostream>
using namespace std;
#define INIT 5
#define CRE 5
int main(){

	int i, j, k, m, n;
	int size=INIT;
	char ch;
	char *w = new char();

	while(1){
		i=-1;
		j=0;
		cin>>ch;
		while(ch!='\n'){
			i++;
			if(ch==' '){
				if(i==0){
					ch=getchar();
					i--;
					continue;
				}
				if(i-1>-1 && w[i-1]==' '){
					i--;
				}else if(i-2>-1 && w[i-1]=='I' && w[i-2]==' '){
					i--;
					w[i++]='y';
					w[i++]='o';
					w[i++]='u';
				}else if(i-3>-1 && w[i-1]=='e' && w[i-2]=='m' && w[i-3]==' '){
					i-=2;
					w[i++]='y';
					w[i++]='o';
					w[i++]='u';
				}else if(i-4>-1 && w[i-1]=='u' && w[i-2]=='o' && w[i-3]=='y' && w[i-4]==' '){
					j=i-4;
					while(j>-1){
						if(j-4>-1 && w[j]=='d' && w[j-1]=='l' && w[j-2]=='u' && w[j-3]=='o' && (w[j-4]=='c' || w[j-4]=='C')){
							j-=4;
							w[j++]='I';
							w[j++]=' ';
							w[j++]='c'; w[j++]='o'; w[j++]='u'; w[j++]='l'; w[j++]='d';
							i=j;
							break;
						}else if(j-2>-1 && w[j]=='n' && w[j-1]=='a' && (w[j-2]=='c' || w[j-2]=='C')){
							j-=2;
							w[j++]='I';
							w[j++]=' ';
							w[j++]='c'; w[j++]='a'; w[j++]='n';
							i=j;
							break;
						}else if(w[j]!=' '){
							break;
						}
						j--;
					}
				}
			}
			if(ch=='I'){
				w[i++]='y';
				w[i++]='o';
				ch='u';
			}else if(i-2>0 && ch=='e' && w[i-1]=='m'){
					i--;
					w[i++]='y';
					w[i++]='o';
					ch='u';
			}
			if(ch=='?'){
				if(w[i-1]==' '){
					i--;
				}
				ch='!';
			}
			w[i]=ch;
			if(w[i]>='A' && w[i]<='Z' && w[i]!='I'){
				w[i]+=32;
			}
			ch=getchar();
		}
		j=0;
		char c[]={'b','y','e','!'};
		while(j<i){
			if(w[j]!=c[j]){
				break;
			}
			j++;
		}
		if(j>=i-1) break;
		cout<<"AI: "<<w<<endl;
		w = new char();

	}
	cout<<"AI: Bye!";
	delete w;
	return 0;

}
