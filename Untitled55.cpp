#include <stdio.h>
#include <stdlib.h>
int main(){
	char s[20];
	char p[20];
	int n;
	int i,j,t;
	printf("enter a string");
	scanf("%s",s);
	fflush(stdin);
	s[n]=0;
	j=n;
	
	for(i=0;s[i]!=0;i++){
		s[j-1]=s[i];
		j--;
		
		}
		
	
	for(i=0;s[i]!=0;i++){
		p[i]=s[i];
	}
	printf("reversed string is %s",p);
}
