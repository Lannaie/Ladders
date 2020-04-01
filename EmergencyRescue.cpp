#include <iostream>
using namespace std;

typedef struct Node{
	int data;
	int len;
	int i;
	struct Node *next;
}Node;
typedef struct{
	int data;
	struct Node *next;
}City;

int main(){

	int i, m, N, M, S, D, a, b, c, flag;
	cin>>N>>M>>S>>D;
	int num[N];
	City *cities;

	i=0;
	while(i<N){
		cin>>num[i];
		i++;
	}
	i=0;
	m=0;
	flag=0;
	cities = new City();
	while(i<M){
		cin>>a>>b>>c;
		int k=0;
		while(k<m){
			if(a!=cities[k].data){
				flag=1;
			}else{
				flag=0;
				break;
			}
		}
		if(flag==1){
			cities[m].data=a;
			citiea[m].next = NULL;
			flag=0;
			m++;
		}
		k=0;
		while(k<m){
			if(b!=cities[k].data){
				flag=1;
			}else{
				flag=0;
				break;
			}
		}
		if(flag==1){
			cities[m].data = b;
			cities[m].next = NULL;
			flag=0;
			m++;
		}
		while(k--){
			if(b==cities[k].data){
				Node *q = cities[k].next;
				int l=0;
				while(l<m){
					if(a==cities[l].data){
						Node *p = new Node();
						p->data=a;
						p->len=c;
						p->i=l;
						p->next = NULL;
						cities[k].next = p;
						break;
					}
				}
				break;
			}
		}
	}

	delete[] cities;
	return 0;

}
