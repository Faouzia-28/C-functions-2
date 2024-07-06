#include<stdio.h>
int pal(char s[],int l,int r);
int main(){
	char s[1000];
	int l=0,res;
	printf("Enter the string: ");
	gets(s);
	while(s[l]!='\0')
	l++;
	res=pal(s,0,l-1);
	if(res)
	printf("Palindron");
	else
	printf("Not palin");
}
int pal(char s[],int l,int r){
	if(l>=r){
		return 1;
	}
	if(s[l]!=s[r])
	return 0;
	pal(s,l+1,r-1);
}
