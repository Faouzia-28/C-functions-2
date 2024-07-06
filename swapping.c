/*#include<stdio.h>
void swap(int a, int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("%d %d",a,b);
}
int main(){
	int a=10,b=20;
	swap(a,b);//pass by value
	printf("%d %d",a,b);//No changes in main memory
}*/
#include<stdio.h>
void swap(int *a, int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	printf("%d %d\n",*a,*b);
}
int main(){
	int a=10,b=20;
	swap(&a,&b);//pass by reference
	printf("%d %d",a,b);//Changes in main memory
}

