#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char s[10];
	char a;
	int i,j,k,m,t;
	printf("enter a string");
	scanf("%s",s);
	fflush(stdin);
	printf("enter the position where the charracter to be inserted");
	scanf("%d",&j);
	fflush(stdin);
	printf("enter the character to be added");
	scanf("%c",&a);
	fflush(stdin);
	m=strlen(s);
	for(i=j-1;i<=6;i++){
		t=s[i+1];
		s[i+1]=s[i];
		s[i]=t;
	}
	s[j-1]=a;
	printf("the final=%s",s);
}
	
	
