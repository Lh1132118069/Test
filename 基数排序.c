#include <stdio.h>
#include <string.h>
int highest(int a);
int main()
{
	int num[10];
	int i;
	for(i=0;i<10;i++){
		scanf("%d", &num[i]);
	}
	
	int count[10][10];
	memset(count, 0, sizeof(int));
	memset(num, 0, sizeof(int));
	int j;
	int k = 0;
	int l = 0;
	for(i=0;i<3;i++){
		if(i==0){
		for(j=0;j<10;j++){
			count[num[j]%10][k] = num[j];
			k++;
		}
	}
		if(i==1){
		k = 0;
		for(j=0;j<10;j++){
			count[num[j]/10%10][k] = num[j];
			k++;
		}
	}
		if(i==2){
		k = 0;
		for(j=0;j<10;j++){
			count[highest(num[j])][k] = num[j];
			k++;
		}
	}
	k = 0; 
	for(j=0;j<10;j++){
		l = 0;
		while(count[k][l] != NULL){
			num[j] = count[k][l];
			l++;
			j++;
		}
		k++;
	}
}

	int cnt = 0;
	for(cnt;cnt<10;cnt++){
		printf("%d\n", num[cnt]);
	}
	
	return 0;
}

int highest(int a)
{
	while(a > 10){
		a /= 10;
	}
	return a;
}
