#include<stdio.h>
int prime(int n){
	int i;
	for(i=2;i<n;i+=1){
		if(n%i==0)
			return 0;
	}
	if(i>=n)
		return 1;
}
int main(){
	int n;
	printf("Enter a num: ");
	scanf("%d",&n);
	if(n==1){
		printf("neither prime nor composite");
		return 0;
	}
	if(prime(n))
		printf("prime");
	else 
		printf("Not a prime");
		return 0;
}
