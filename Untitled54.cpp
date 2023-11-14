#include <stdio.h>
int main(){
	char s[30];
	int i,j;
	printf("enter a uppercase string");
	scanf("%s",s);
	for(i=0;s[i]!=0;i++){
		s[i]=s[i]+32;
		
	}
	printf("llower case string %s",s);
}
