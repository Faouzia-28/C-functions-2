#include<stdio.h>
int print(int n);
int main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("%d",print(n));
}
int print(int n){
	if (n==0)
		return 0;
	else
		return n+print(n-1);
}
