#include <stdio.h>
int main(){
	char s[10];
	char p[10];
	int i,j;
	
	printf("enter 1st string");
	scanf("%s",s);
	for(i=0;i<10;i++){
		p[i]=s[i];
	}
	printf("copied string is %s",p);
	
}
