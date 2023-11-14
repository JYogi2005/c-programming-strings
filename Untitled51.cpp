#include <stdio.h>
int main(){
	char s[10];
	int i,count;
	printf("enter a string");
	scanf("%s",s);
	i=0;
	count=0;
	while(s[i]!=0){
		count+=1;
		i++;
	}
	
	
	printf("length of the string is=%d",count);
}
