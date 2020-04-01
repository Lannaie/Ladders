#include <stdio.h>
int main(){

	int wei;

	printf("输入身高(正整数): ");
	scanf("%d", &wei);
	printf("%.1f", (wei-100)*0.9*2);
			
	return 0;

}
