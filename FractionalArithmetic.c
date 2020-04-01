#include <stdio.h>
int main(){

	int n, i;
    int deno=1, elem=1, totalelem=0;
	scanf("%d", &n);
	int frac[2][n];

	i=n;
	while(i--){
		scanf("%d/%d", &frac[0][i], &frac[1][i]);
		deno*=frac[1][i];
	}
	i=n;
	while(i--){
		int j=0;
		elem=frac[0][i];
		while(j<i){
			elem*=frac[1][j];
			j++;
		}
		j++;
		while(j<n){
			elem*=frac[1][j];
			j++;
		}
		totalelem+=elem;
		j=0;
	}
	if(totalelem/deno!=0){
		printf("%d ", totalelem/deno);
	}
	totalelem%=deno;
	i=totalelem;
	if(i==0) return 0;
	while(i){
		if(totalelem%i==0 && deno%i==0){
			totalelem/=i;
			deno/=i;
			break;
		}
		i--;
	}
	printf("%d/%d\n", totalelem, deno);
	
			
	return 0;

}

