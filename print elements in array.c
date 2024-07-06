//wap to print the elements in an array using recursive fn
#include<stdio.h>
int print(int ar[],int n,int i);
int main(){
	int n,ar[100],i;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i+=1){
		scanf("%d",&ar[i]);
	}
	print(ar,n,0);
	return 0;
}
int print(int ar[],int n,int i){
	if(i>=n){
		return 0;
	}
	printf("%d\n",ar[i]);
	print(ar,n,i+1);
}
