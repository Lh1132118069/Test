#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	int a = 2;
	int num[12];
	int b,temp,isprime,max;
	int count = 0;
	isprime = 1;
	max = 0;
	for(a=2;a<=12;a++){
		temp = n;
		isprime = 1;
		count = 0; 
		for(b=a;b<=12;b++){
			if(temp % b == 0){
				temp /= b;
				if(isprime == 1){
					num[count] = b;
					count++;
				}
			}else{
				isprime = 0;
				if(count > max){
					max = count;
				}
				break;
			}
		}
	}
	printf("%d\n", max);
	int i = 0;
	for(i;i<max;i++){
		printf("%d ", num[i]);
	}
	
	return 0;
}
