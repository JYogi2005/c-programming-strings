#include <stdio.h>
#include <stdlib.h>
int main(){
	char s[30];
	char p[30];
	int i,j;
	printf("enter string 1");
	scanf("%s",s);
	fflush(stdin);
	printf("enter string 2");
	scanf("%s",p);
	fflush(stdin);
	
	
	for(i=0;s[i]!=0;){
	if(s[i]==p[i]){
		i++;
		
	}
	else{
		printf("not equal");
	}
	
		
	
	}
	

}
